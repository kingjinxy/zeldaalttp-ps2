	THUMB_FUNC_START sub_080253B8
sub_080253B8: @ 0x080253B8
	push {r4,r5,lr}
	add r5, r0, #0
	mov r4, #0
	mov r0, #1
	strb r0, [r5, #20]
	mov r0, #60
	strb r0, [r5, #23]
	strb r4, [r5, #11]
	ldr r1, [r5, #100]
	add r0, r5, #0
	bl sub_0803CECC
	lsl r0, r0, #3
	add r1, r5, #0
	add r1, r1, #43
	strb r0, [r1]
	str r4, [r5, #56]
	ldr r0, [r5, #100]
	ldr r0, [r0, #72]
	str r0, [r5, #72]
	add r1, r1, #71
	mov r0, #150
	lsl r0, r0, #1
	strh r0, [r1]
	bl 0x0800099C
	mov r1, #15
	and r0, r0, r1
	add r0, r0, #24
	add r1, r5, #0
	add r1, r1, #116
	strh r0, [r1]
	ldr r2, [r5, #100]
	ldrb r0, [r2, #8]
	cmp r0, #1
	bne _08025434
	ldrb r1, [r2, #10]
	lsl r0, r1, #3
	add r0, r0, r1
	lsl r0, r0, #4
	ldr r1, _08025430  @ =gUnknown_03006A30
	add r2, r0, r1
	mov r0, #14
	strb r0, [r2, #12]
	add r1, r2, #0
	add r1, r1, #56
	mov r0, #189
	strb r0, [r1]
	add r1, r1, #1
	mov r0, #2
	strb r0, [r1]
	add r1, r1, #1
	mov r0, #255
	strb r0, [r1]
	ldr r0, [r5, #100]
	add r0, r0, #42
	mov r1, #0
	strb r1, [r0]
	b _0802544A
	.byte 0x00
	.byte 0x00
_08025430:
	.4byte gUnknown_03006A30
_08025434:
	ldrh r1, [r2, #8]
	mov r0, #129
	lsl r0, r0, #3
	cmp r1, r0
	bne _0802544A
	ldrb r0, [r2, #26]
	mov r1, #240
	and r1, r1, r0
	mov r0, #6
	orr r1, r1, r0
	strb r1, [r2, #26]
_0802544A:
	pop {r4,r5}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_080253B8

