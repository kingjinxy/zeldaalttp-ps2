	THUMB_FUNC_START sub_0812D88C
sub_0812D88C: @ 0x0812D88C
	push {r4,r5,lr}
	bl sub_08126D5C
	bl sub_0812E0A0
	ldr r4, _0812D8E4  @ =gRam
	ldr r0, _0812D8E8  @ =0x000009E8
	add r1, r4, r0
	ldrh r0, [r1]
	sub r0, r0, #1
	mov r5, #0
	strh r0, [r1]
	lsl r0, r0, #16
	cmp r0, #0
	bne _0812D914
	ldr r0, _0812D8EC  @ =gUnknown_02002434
	ldrh r0, [r0]
	cmp r0, #0
	bne _0812D8FC
	mov r0, #1
	strh r0, [r1]
	ldr r1, _0812D8F0  @ =0x00000534
	add r0, r4, r1
	ldrh r1, [r0]
	mov r0, #2
	and r0, r0, r1
	cmp r0, #0
	beq _0812D914
	mov r0, #73
	mov r1, #0
	bl sub_0812A324
	ldr r1, _0812D8F4  @ =0x000009EC
	add r0, r4, r1
	strb r5, [r0]
	sub r1, r1, #79
	add r0, r4, r1
	strb r5, [r0]
	ldr r0, _0812D8F8  @ =0x000009AD
	add r1, r4, r0
	mov r0, #13
	strb r0, [r1]
	b _0812D914
	.byte 0x00
	.byte 0x00
_0812D8E4:
	.4byte gRam
_0812D8E8:
	.4byte 0x000009E8
_0812D8EC:
	.4byte gUnknown_02002434
_0812D8F0:
	.4byte 0x00000534
_0812D8F4:
	.4byte 0x000009EC
_0812D8F8:
	.4byte 0x000009AD
_0812D8FC:
	ldr r0, _0812D91C  @ =0x000009AC
	add r1, r4, r0
	mov r0, #20
	strb r0, [r1]
	ldr r1, _0812D920  @ =0x000009AD
	add r0, r4, r1
	strb r5, [r0]
	ldr r0, _0812D924  @ =gUnknown_02006882
	strb r5, [r0]
	sub r1, r1, #16
	add r0, r4, r1
	strb r5, [r0]
_0812D914:
	pop {r4,r5}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0812D91C:
	.4byte 0x000009AC
_0812D920:
	.4byte 0x000009AD
_0812D924:
	.4byte gUnknown_02006882
	THUMB_FUNC_END sub_0812D88C

