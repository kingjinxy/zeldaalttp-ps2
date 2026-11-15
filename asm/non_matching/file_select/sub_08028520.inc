	THUMB_FUNC_START sub_08028520
sub_08028520: @ 0x08028520
	push {r4,lr}
	add r4, r0, #0
	add r0, r0, #80
	ldrh r1, [r0]
	mov r0, #192
	lsl r0, r0, #8
	and r0, r0, r1
	cmp r0, #0
	bne _08028538
	add r0, r4, #0
	bl 0x08008D90
_08028538:
	ldrb r0, [r4, #20]
	add r0, r0, #1
	mov r2, #0
	strb r0, [r4, #20]
	ldrb r1, [r4, #28]
	mov r0, #4
	neg r0, r0
	and r0, r0, r1
	mov r1, #1
	orr r0, r0, r1
	strb r0, [r4, #28]
	add r0, r4, #0
	add r0, r0, #46
	strb r2, [r0]
	add r1, r4, #0
	add r1, r1, #60
	mov r0, #152
	strb r0, [r1]
	add r1, r1, #3
	mov r0, #11
	strb r0, [r1]
	add r1, r1, #1
	mov r0, #22
	strb r0, [r1]
	add r1, r1, #4
	mov r0, #10
	strb r0, [r1]
	add r1, r1, #2
	mov r0, #16
	strb r0, [r1]
	ldr r0, _0802859C  @ =gUnknown_0813CFCC
	ldr r0, [r0]
	str r0, [r4, #72]
	add r1, r1, #22
	ldr r0, _080285A0  @ =0x000007FF
	strh r0, [r1]
	add r0, r4, #0
	mov r1, #1
	bl 0x08003870
	add r0, r4, #0
	bl 0x080005F0
	mov r0, #3
	bl 0x08003DFC
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0802859C:
	.4byte gUnknown_0813CFCC
_080285A0:
	.4byte 0x000007FF
	THUMB_FUNC_END sub_08028520

