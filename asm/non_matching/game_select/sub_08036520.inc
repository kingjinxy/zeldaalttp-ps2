	THUMB_FUNC_START sub_08036520
sub_08036520: @ 0x08036520
	push {r4,r5,lr}
	add r5, r0, #0
	ldrb r0, [r5, #20]
	add r0, r0, #1
	mov r4, #0
	strb r0, [r5, #20]
	ldrb r1, [r5, #28]
	mov r3, #4
	neg r3, r3
	add r0, r3, #0
	and r0, r0, r1
	mov r1, #1
	orr r0, r0, r1
	strb r0, [r5, #28]
	ldrb r2, [r5, #29]
	mov r1, #63
	add r0, r1, #0
	and r0, r0, r2
	strb r0, [r5, #29]
	ldrb r0, [r5, #31]
	and r1, r1, r0
	strb r1, [r5, #31]
	strb r3, [r5, #23]
	add r0, r5, #0
	bl sub_08003B94
	ldr r0, _08036584  @ =gUnknown_03000488
	mov r1, #128
	lsl r1, r1, #2
	strh r1, [r0, #2]
	strh r1, [r0]
	strh r4, [r0, #4]
	add r1, r5, #0
	bl sub_0803D770
	mov r0, #16
	strh r0, [r5, #58]
	ldrb r0, [r5, #10]
	cmp r0, #0
	bne _08036588
	add r0, r5, #0
	mov r1, #0
	mov r2, #3
	bl sub_08003840
	mov r0, #25
	bl play_sound
	b _08036590
	.byte 0x00
	.byte 0x00
_08036584:
	.4byte gUnknown_03000488
_08036588:
	add r0, r5, #0
	mov r1, #0
	bl sub_08003870
_08036590:
	pop {r4,r5}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_08036520

	.byte 0x00
	.byte 0x00
