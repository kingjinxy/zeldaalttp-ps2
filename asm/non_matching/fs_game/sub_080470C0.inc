	THUMB_FUNC_START sub_080470C0
sub_080470C0: @ 0x080470C0
	push {r4,r5,r7,lr}
	sub sp, sp, #4
	mov r7, sp
	str r0, [r7]
	ldr r0, [r7]
	ldrb r1, [r0, #20]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #15
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0, #20]
	bl sub_0800099C
	add r1, r0, #0
	ldr r0, [r7]
	ldr r2, _0804716C  @ =gUnknown_084287A4
	ldr r4, [r7]
	add r3, r4, #0
	add r4, r4, #113
	ldrb r5, [r4]
	lsl r3, r5, #3
	mov r4, #7
	and r1, r1, r4
	add r3, r3, r1
	add r1, r2, r3
	add r2, r0, #0
	add r0, r0, #113
	ldrb r2, [r0]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	ldrb r1, [r1]
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0]
	ldr r1, [r7]
	add r0, r1, #0
	add r1, r1, #113
	ldrb r0, [r1]
	cmp r0, #255
	bne _0804713A
	bl sub_0800099C
	add r1, r0, #0
	ldr r0, [r7]
	mov r2, #1
	and r1, r1, r2
	add r2, r0, #0
	add r0, r0, #113
	ldrb r2, [r0]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0]
_0804713A:
	ldr r0, [r7]
	ldr r1, _08047170  @ =gUnknown_08137B10
	ldr r3, [r7]
	add r2, r3, #0
	add r3, r3, #113
	ldrb r2, [r3]
	add r3, r2, #0
	lsl r2, r3, #2
	add r1, r1, r2
	ldr r2, [r1]
	add r1, r2, #0
	add r2, r0, #0
	add r0, r0, #112
	ldrb r2, [r0]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0]
	add sp, sp, #4
	pop {r4,r5,r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0804716C:
	.4byte gUnknown_084287A4
_08047170:
	.4byte gUnknown_08137B10
	THUMB_FUNC_END sub_080470C0

