	thumb_func_start sub_08003170
sub_08003170: @ 0x08003170
	ldr r1, _08003220 @ =0x03006C80
	ldrb r1, [r1]
	subs r1, #1
	beq _08003180
	lsls r1, r1, #2
	ldr r2, _08003224 @ =0x08002DFC
	ldr r0, [r2, r1]
	b _08003184
_08003180:
	eors r0, r0
	mov pc, lr
_08003184:
	push {r4, lr}
	push {r0}
	bl sub_0800099C
	adds r1, r0, #0
	pop {r0}
	movs r2, #0xff
	ands r1, r2
	eors r3, r3
	ldrb r2, [r0]
_08003198:
	cmp r1, r2
	blo _080031A6
	adds r0, #1
	ldrb r4, [r0]
	adds r2, r2, r4
	adds r3, #1
	b _08003198
_080031A6:
	adds r0, r3, #0
	pop {r4, pc}
	.align 2, 0

