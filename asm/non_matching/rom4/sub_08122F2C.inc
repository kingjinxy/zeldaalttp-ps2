	THUMB_FUNC_START sub_08122F2C
sub_08122F2C: @ 0x08122F2C
	push {r4-r7,lr}
	sub sp, sp, #4
	lsl r0, r0, #24
	lsr r0, r0, #24
	lsl r1, r1, #24
	lsr r1, r1, #24
	mov r2, sp
	bl sub_080AB89C
	lsl r0, r0, #24
	asr r3, r0, #24
	cmp r3, #0
	bne _0812302C
	ldr r2, _08123034  @ =gRam
	mov r1, sp
	ldr r4, _08123038  @ =0x00001844
	add r0, r2, r4
	ldrb r1, [r1]
	add r0, r0, r1
	mov r1, #10
	strb r1, [r0]
	mov r1, sp
	sub r4, r4, #29
	add r0, r2, r4
	ldrb r1, [r1]
	add r0, r0, r1
	mov r1, #128
	strb r1, [r0]
	mov r1, sp
	ldr r4, _0812303C  @ =0x00000E1F
	add r0, r2, r4
	ldrb r1, [r1]
	add r0, r0, r1
	strb r3, [r0]
	mov r1, sp
	ldr r4, _08123040  @ =0x00001832
	add r0, r2, r4
	ldrb r1, [r1]
	add r0, r0, r1
	strb r3, [r0]
	ldr r0, _08123044  @ =0x00000A3C
	add r2, r2, r0
	mov r4, #0
	ldr r0, _08123048  @ =0x0000FFF2
	strh r0, [r2]
	mov r0, #75
	mov r1, #0
	bl sub_0812A324
	ldr r0, _0812304C  @ =gUnknown_02006938
	strb r4, [r0]
	ldr r1, _08123050  @ =gUnknown_02006936
	mov r2, #212
	lsl r2, r2, #2
	add r0, r2, #0
	strh r0, [r1]
	mov r1, sp
	mov r0, #11
	strb r0, [r1]
	mov r3, sp
	ldr r4, _08123054  @ =gUnknown_081803E0
	mov r12, r4
	ldr r7, _08123058  @ =gUnknown_081803EC
	ldr r6, _0812305C  @ =gUnknown_081803F8
	ldr r5, _08123060  @ =gUnknown_08180404
	ldr r4, _08123064  @ =gUnknown_08180410
_08122FB0:
	ldrb r0, [r3]
	ldr r1, _08123068  @ =gUnknown_02006880
	add r0, r0, r1
	mov r1, #0
	strb r1, [r0]
	ldrb r0, [r3]
	ldr r2, _0812306C  @ =gUnknown_0200688C
	add r1, r0, r2
	add r0, r0, r12
	ldrb r0, [r0]
	strb r0, [r1]
	ldrb r0, [r3]
	add r2, r2, #12
	add r1, r0, r2
	add r0, r0, r7
	ldrb r0, [r0]
	strb r0, [r1]
	ldrb r0, [r3]
	add r2, r2, #12
	add r1, r0, r2
	add r0, r0, r6
	ldrb r0, [r0]
	strb r0, [r1]
	ldrb r0, [r3]
	ldr r1, _08123070  @ =gUnknown_020068B0
	add r0, r0, r1
	mov r1, #7
	strb r1, [r0]
	ldrb r0, [r3]
	add r2, r2, #24
	add r1, r0, r2
	add r0, r0, r5
	ldrb r0, [r0]
	strb r0, [r1]
	ldrb r0, [r3]
	ldr r1, _08123074  @ =gUnknown_020068C8
	add r0, r0, r1
	mov r1, #2
	strb r1, [r0]
	ldrb r0, [r3]
	add r2, r2, #24
	add r1, r0, r2
	add r0, r0, r4
	ldrb r0, [r0]
	strb r0, [r1]
	ldrb r0, [r3]
	ldr r1, _08123078  @ =gUnknown_020068E0
	add r0, r0, r1
	mov r1, #1
	strb r1, [r0]
	ldrb r1, [r3]
	ldr r0, _0812307C  @ =gUnknown_020068EC
	add r2, r1, r0
	mov r0, #1
	and r1, r1, r0
	strb r1, [r2]
	ldrb r0, [r3]
	sub r0, r0, #1
	strb r0, [r3]
	lsl r0, r0, #24
	cmp r0, #0
	bge _08122FB0
_0812302C:
	add sp, sp, #4
	pop {r4-r7}
	pop {r0}
	bx r0
_08123034:
	.4byte gRam
_08123038:
	.4byte 0x00001844
_0812303C:
	.4byte 0x00000E1F
_08123040:
	.4byte 0x00001832
_08123044:
	.4byte 0x00000A3C
_08123048:
	.4byte 0x0000FFF2
_0812304C:
	.4byte gUnknown_02006938
_08123050:
	.4byte gUnknown_02006936
_08123054:
	.4byte gUnknown_081803E0
_08123058:
	.4byte gUnknown_081803EC
_0812305C:
	.4byte gUnknown_081803F8
_08123060:
	.4byte gUnknown_08180404
_08123064:
	.4byte gUnknown_08180410
_08123068:
	.4byte gUnknown_02006880
_0812306C:
	.4byte gUnknown_0200688C
_08123070:
	.4byte gUnknown_020068B0
_08123074:
	.4byte gUnknown_020068C8
_08123078:
	.4byte gUnknown_020068E0
_0812307C:
	.4byte gUnknown_020068EC
	THUMB_FUNC_END sub_08122F2C

