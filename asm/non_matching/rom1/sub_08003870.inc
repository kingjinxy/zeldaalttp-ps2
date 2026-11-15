	thumb_func_start sub_08003870	@ r0, r1
sub_08003870: @ 0x08003870
	movs r2, #0x23
	strb r1, [r0, r2]
	ldr r2, _08003A1C @ =0x08003228
	ldrb r3, [r0, #0x1b]
	lsls r3, r3, #2
	ldr r2, [r2, r3]
	lsls r1, r1, #2
	ldr r1, [r2, r1]
	str r1, [r0, #0x24]
	movs r0, r0

FrameNeedsUpdate:
	movs r2, #0x21		@ Get this frame idx
	ldrb r1, [r0, r2]
	movs r3, #0x22
	strb r1, [r0, r3]	@ Store as prev frame idx

	ldr r1, [r0, #0x24]	@ Load frame data

	ldrb r3, [r1]		@ Set new frame idx
	strb r3, [r0, r2]

	ldrb r3, [r1, #1]	@ Set new frame timer
	movs r2, #0x28
	strb r3, [r0, r2]

	ldrb r3, [r1, #2]	@ Load something ??
	movs r2, #0x2f
	strb r3, [r0, r2]

	ldrb r3, [r1, #3]	@ Load something ??
	movs r2, #0x29
	strb r3, [r0, r2]

	adds r1, #4			@ advance r1
	movs r2, #0x80
	tst r2, r3			@ Maybe testing if we should flip the sprite?
	beq _080038B2
	eors r2, r2			@ huh??
	ldrsh r3, [r1, r2]
	subs r1, r1, r3

_080038B2:
	str r1, [r0, #0x24]	@ Store result and be done
	mov pc, lr
	.align 2, 0

