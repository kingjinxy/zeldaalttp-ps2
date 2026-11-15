	THUMB_FUNC_START sub_0800C7E8
sub_0800C7E8: @ 0x0800C7E8
	push {r4,r5,lr}
	sub sp, sp, #8
	ldr r0, _0800C8C8  @ =0x04000120
	ldr r1, [r0, #4]
	ldr r0, [r0]
	str r0, [sp]
	str r1, [sp, #4]
	ldr r2, _0800C8CC  @ =gUnknown_02030790
	ldr r0, _0800C8D0  @ =0x04000128
	ldr r0, [r0]
	lsl r0, r0, #25
	lsr r0, r0, #31
	mov r5, #0
	strb r0, [r2, #7]
	mov r0, sp
	ldrh r1, [r0]
	ldr r0, _0800C8D4  @ =0x0000FEFE
	add r4, r2, #0
	cmp r1, r0
	bne _0800C848
	ldr r0, [r4, #24]
	cmp r0, #11
	ble _0800C848
	mov r0, #1
	neg r0, r0
	str r0, [r4, #24]
	ldr r1, [r4, #40]
	ldr r0, [r4, #36]
	str r0, [r4, #40]
	str r1, [r4, #36]
	ldrb r0, [r4, #4]
	cmp r0, #0
	beq _0800C836
	ldr r1, [r4, #32]
	ldr r0, [r4, #28]
	str r0, [r4, #32]
	str r1, [r4, #28]
	strb r5, [r4, #4]
	str r5, [r4, #20]
_0800C836:
	ldr r3, _0800C8D8  @ =0x04000208
	strh r5, [r3]
	ldr r2, _0800C8DC  @ =gUnknown_03007FF8
	ldrh r0, [r2]
	mov r1, #128
	orr r0, r0, r1
	strh r0, [r2]
	mov r0, #1
	strh r0, [r3]
_0800C848:
	ldr r0, [r4, #20]
	cmp r0, #11
	bgt _0800C85A
	ldr r2, _0800C8D0  @ =0x04000128
	ldr r1, [r4, #32]
	lsl r0, r0, #1
	add r0, r0, r1
	ldrh r0, [r0]
	strh r0, [r2, #2]
_0800C85A:
	ldr r0, [r4, #20]
	cmp r0, #12
	bgt _0800C864
	add r0, r0, #1
	str r0, [r4, #20]
_0800C864:
	ldr r0, [r4, #24]
	cmp r0, #0
	blt _0800C88C
	ldr r1, [r4, #36]
	mov r2, sp
	lsl r0, r0, #1
	add r1, r1, r0
	mov r3, #3
_0800C874:
	ldrh r0, [r2]
	strh r0, [r1]
	add r2, r2, #2
	add r1, r1, #28
	sub r3, r3, #1
	cmp r3, #0
	bge _0800C874
	ldr r0, [r4, #24]
	cmp r0, #11
	bne _0800C88C
	mov r0, #1
	strb r0, [r4, #5]
_0800C88C:
	ldr r0, [r4, #24]
	cmp r0, #11
	bgt _0800C896
	add r0, r0, #1
	str r0, [r4, #24]
_0800C896:
	ldrb r2, [r4]
	cmp r2, #0
	beq _0800C8A2
	ldr r1, _0800C8E0  @ =0x0400010E
	mov r0, #0
	strh r0, [r1]
_0800C8A2:
	ldr r0, [r4, #20]
	cmp r0, #12
	bgt _0800C8BC
	cmp r2, #0
	beq _0800C8BC
	ldr r2, _0800C8D0  @ =0x04000128
	ldrh r0, [r2]
	mov r1, #128
	orr r0, r0, r1
	strh r0, [r2]
	ldr r1, _0800C8E0  @ =0x0400010E
	mov r0, #192
	strh r0, [r1]
_0800C8BC:
	mov r0, #0
	strb r0, [r4, #9]
	add sp, sp, #8
	pop {r4,r5}
	pop {r0}
	bx r0
_0800C8C8:
	.4byte 0x04000120
_0800C8CC:
	.4byte gUnknown_02030790
_0800C8D0:
	.4byte 0x04000128
_0800C8D4:
	.4byte 0x0000FEFE
_0800C8D8:
	.4byte 0x04000208
_0800C8DC:
	.4byte gUnknown_03007FF8
_0800C8E0:
	.4byte 0x0400010E
	THUMB_FUNC_END sub_0800C7E8

