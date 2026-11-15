	THUMB_FUNC_START sub_08106838
sub_08106838: @ 0x08106838
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	lsl r0, r0, #24
	lsr r6, r0, #24
	ldr r2, _0810689C  @ =gRam
	ldr r0, _081068A0  @ =0x00000961
	add r3, r2, r0
	mov r0, #0
	strb r0, [r3]
	ldr r1, _081068A4  @ =0x00000FB2
	add r0, r2, r1
	add r0, r6, r0
	ldrb r0, [r0]
	lsl r1, r0, #3
	add r0, r0, r1
	lsl r0, r0, #24
	lsr r5, r0, #24
	ldr r0, _081068A8  @ =gUnknown_0817BF28
	add r0, r6, r0
	ldrb r4, [r0]
	mov r0, #150
	lsl r0, r0, #4
	add r1, r2, r0
	mov r0, #8
	strb r0, [r1]
	mov r10, r2
	ldr r2, _081068AC  @ =gUnknown_0817BF2B
	mov r9, r2
	mov r7, #128
	mov r8, r1
	ldr r0, _081068B0  @ =gUnknown_020109B0
	mov r12, r0
_0810687E:
	mov r2, r12
	add r1, r4, r2
	mov r2, r9
	add r0, r5, r2
	ldrb r2, [r1]
	ldrb r0, [r0]
	cmp r2, r0
	beq _081068E4
	sub r0, r2, r0
	and r0, r0, r7
	cmp r0, #0
	bne _081068B4
	sub r0, r2, #1
	b _081068B6
	.byte 0x00
	.byte 0x00
_0810689C:
	.4byte gRam
_081068A0:
	.4byte 0x00000961
_081068A4:
	.4byte 0x00000FB2
_081068A8:
	.4byte gUnknown_0817BF28
_081068AC:
	.4byte gUnknown_0817BF2B
_081068B0:
	.4byte gUnknown_020109B0
_081068B4:
	add r0, r2, #1
_081068B6:
	strb r0, [r1]
	ldrb r0, [r3]
	add r0, r0, #1
	strb r0, [r3]
	mov r0, r12
	add r1, r4, r0
	mov r2, r9
	add r0, r5, r2
	ldrb r2, [r1]
	ldrb r0, [r0]
	cmp r2, r0
	beq _081068E4
	sub r0, r2, r0
	and r0, r0, r7
	cmp r0, #0
	bne _081068DA
	sub r0, r2, #1
	b _081068DC
_081068DA:
	add r0, r2, #1
_081068DC:
	strb r0, [r1]
	ldrb r0, [r3]
	add r0, r0, #1
	strb r0, [r3]
_081068E4:
	ldr r0, _08106900  @ =gUnknown_020109F0
	add r1, r4, r0
	ldr r2, _08106904  @ =gUnknown_0817BF58
	add r0, r5, r2
	ldrb r2, [r1]
	ldrb r0, [r0]
	cmp r2, r0
	beq _08106912
	sub r0, r2, r0
	and r0, r0, r7
	cmp r0, #0
	bne _08106908
	sub r0, r2, #1
	b _0810690A
_08106900:
	.4byte gUnknown_020109F0
_08106904:
	.4byte gUnknown_0817BF58
_08106908:
	add r0, r2, #1
_0810690A:
	strb r0, [r1]
	ldrb r0, [r3]
	add r0, r0, #1
	strb r0, [r3]
_08106912:
	add r0, r4, #1
	lsl r0, r0, #24
	lsr r4, r0, #24
	add r0, r5, #1
	lsl r0, r0, #24
	lsr r5, r0, #24
	mov r1, r8
	ldrb r0, [r1]
	sub r0, r0, #1
	strb r0, [r1]
	lsl r0, r0, #24
	cmp r0, #0
	bge _0810687E
	ldr r0, _08106964  @ =0x00000961
	add r0, r0, r10
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	cmp r0, #0
	bne _08106956
	ldr r1, _08106968  @ =0x00000F52
	add r1, r1, r10
	add r1, r6, r1
	ldrb r0, [r1]
	sub r0, r0, #1
	strb r0, [r1]
	bl GetRandomInt
	ldr r2, _0810696C  @ =0x00000FC2
	add r2, r2, r10
	add r2, r6, r2
	mov r1, #15
	and r1, r1, r0
	strb r1, [r2]
_08106956:
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r0}
	bx r0
_08106964:
	.4byte 0x00000961
_08106968:
	.4byte 0x00000F52
_0810696C:
	.4byte 0x00000FC2
	THUMB_FUNC_END sub_08106838

