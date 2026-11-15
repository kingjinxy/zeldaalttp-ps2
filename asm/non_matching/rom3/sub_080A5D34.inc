	THUMB_FUNC_START sub_080A5D34
sub_080A5D34: @ 0x080A5D34
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	sub sp, sp, #8
	ldr r0, _080A5E34  @ =gRam
	ldr r1, _080A5E38  @ =0x000017E6
	add r3, r0, r1
	ldrb r1, [r3]
	add r1, r1, #1
	mov r2, #15
	and r1, r1, r2
	mov r4, #0
	strb r1, [r3]
	add r7, r0, #0
	cmp r1, #8
	bls _080A5D6E
	strb r4, [r3]
	ldr r3, _080A5E3C  @ =0x000017E5
	add r2, r7, r3
	ldrb r0, [r2]
	add r0, r0, #1
	mov r1, #3
	and r0, r0, r1
	strb r0, [r2]
	cmp r0, #3
	bne _080A5D6E
	strb r4, [r2]
_080A5D6E:
	ldr r0, _080A5E40  @ =gShield
	ldrb r6, [r0]
	ldr r1, _080A5E44  @ =0x000017AF
	add r0, r7, r1
	ldrb r0, [r0]
	ldr r1, _080A5E48  @ =gUnknown_0816B51D
	add r1, r6, r1
	lsr r0, r0, #1
	ldrb r1, [r1]
	add r0, r0, r1
	lsl r0, r0, #24
	lsr r6, r0, #24
	ldr r2, _080A5E4C  @ =0x00000961
	add r1, r7, r2
	ldr r0, _080A5E50  @ =gUnknown_0816AAF0
	add r0, r6, r0
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	ldrb r1, [r1]
	add r0, r0, r1
	lsl r0, r0, #16
	lsr r0, r0, #16
	str r0, [sp]
	mov r3, #150
	lsl r3, r3, #4
	add r1, r7, r3
	ldr r0, _080A5E54  @ =gUnknown_0816AAFC
	add r0, r6, r0
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	ldrb r1, [r1]
	add r0, r0, r1
	lsl r0, r0, #16
	lsr r0, r0, #16
	mov r9, r0
	ldr r1, _080A5E3C  @ =0x000017E5
	add r0, r7, r1
	ldrb r0, [r0]
	lsl r0, r0, #2
	add r2, r2, #105
	add r1, r7, r2
	add r2, r0, #0
	strh r0, [r1]
	ldr r1, _080A5E58  @ =gUnknown_0816B318
	ldr r3, _080A5E5C  @ =0x00001732
	add r0, r7, r3
	ldrb r0, [r0]
	lsl r0, r0, #2
	add r0, r0, r1
	ldr r0, [r0]
	ldr r3, _080A5E60  @ =0x00000968
	add r1, r7, r3
	ldrb r1, [r1]
	lsl r1, r1, #24
	asr r1, r1, #24
	add r0, r0, r1
	ldrb r3, [r0]
	ldr r1, _080A5E64  @ =0x000017E1
	add r0, r7, r1
	ldrb r0, [r0]
	cmp r0, #2
	bne _080A5E88
	mov r6, #6
	ldr r2, _080A5E68  @ =gUnknown_08169774
	mov r10, r2
	mov r0, r9
	add r0, r0, #8
	str r0, [sp, #4]
	ldr r2, _080A5E6C  @ =gUnknown_0816B51A
	add r1, r1, #3
	add r0, r7, r1
	ldrb r1, [r0]
_080A5E02:
	add r0, r6, r2
	ldrb r0, [r0]
	cmp r0, r1
	beq _080A5E78
	sub r0, r6, #1
	lsl r0, r0, #24
	lsr r6, r0, #24
	cmp r0, #0
	bge _080A5E02
_080A5E14:
	ldr r2, _080A5E70  @ =0x000016D4
	add r0, r7, r2
	ldrb r0, [r0]
	cmp r0, #2
	bls _080A5E24
	sub r0, r0, #3
	lsl r0, r0, #24
	lsr r0, r0, #24
_080A5E24:
	lsl r0, r0, #2
	ldr r2, _080A5E74  @ =0x000009CA
	add r1, r7, r2
	strh r0, [r1]
	add r0, r0, #32
	lsl r0, r0, #24
	lsr r6, r0, #24
	b _080A5E9A
_080A5E34:
	.4byte gRam
_080A5E38:
	.4byte 0x000017E6
_080A5E3C:
	.4byte 0x000017E5
_080A5E40:
	.4byte gShield
_080A5E44:
	.4byte 0x000017AF
_080A5E48:
	.4byte gUnknown_0816B51D
_080A5E4C:
	.4byte 0x00000961
_080A5E50:
	.4byte gUnknown_0816AAF0
_080A5E54:
	.4byte gUnknown_0816AAFC
_080A5E58:
	.4byte gUnknown_0816B318
_080A5E5C:
	.4byte 0x00001732
_080A5E60:
	.4byte 0x00000968
_080A5E64:
	.4byte 0x000017E1
_080A5E68:
	.4byte gUnknown_08169774
_080A5E6C:
	.4byte gUnknown_0816B51A
_080A5E70:
	.4byte 0x000016D4
_080A5E74:
	.4byte 0x000009CA
_080A5E78:
	ldr r0, _080A5E84  @ =0x000009CA
	add r1, r7, r0
	mov r0, #0
	strh r0, [r1]
	b _080A5E14
	.byte 0x00
	.byte 0x00
_080A5E84:
	.4byte 0x000009CA
_080A5E88:
	add r0, r2, #0
	add r0, r0, #20
	lsl r0, r0, #24
	lsr r6, r0, #24
	ldr r1, _080A5FA4  @ =gUnknown_08169774
	mov r10, r1
	mov r2, r9
	add r2, r2, #8
	str r2, [sp, #4]
_080A5E9A:
	ldr r1, _080A5FA8  @ =0x000017E2
	add r0, r7, r1
	ldrh r4, [r0]
	add r4, r4, r3
	lsl r4, r4, #16
	lsr r2, r4, #16
	mov r8, r2
	lsr r0, r6, #1
	lsl r0, r0, #1
	add r0, r0, r10
	ldrh r1, [r0]
	ldr r0, _080A5FAC  @ =0x0000CFFF
	and r1, r1, r0
	ldr r3, _080A5FB0  @ =0x000017EE
	add r5, r7, r3
	ldrh r0, [r5]
	orr r1, r1, r0
	mov r0, r8
	bl sub_080A452C
	add r0, r6, #2
	asr r0, r0, #1
	lsl r0, r0, #1
	add r0, r0, r10
	ldrh r0, [r0]
	ldrh r1, [r5]
	orr r1, r1, r0
	mov r0, r8
	add r0, r0, #4
	lsl r0, r0, #16
	lsr r0, r0, #16
	bl sub_080A452C
	lsr r4, r4, #18
	lsl r4, r4, #3
	mov r1, #170
	lsl r1, r1, #3
	add r0, r7, r1
	add r4, r4, r0
	ldr r0, _080A5FB4  @ =gUnknown_03003E68
	ldrb r0, [r0]
	cmp r0, #0
	bne _080A5F22
	ldr r2, _080A5FB8  @ =0x000001FF
	add r5, r2, #0
	mov r0, r9
	and r0, r0, r5
	ldrh r1, [r4, #2]
	ldr r3, _080A5FBC  @ =0xFFFFFE00
	add r2, r3, #0
	and r2, r2, r1
	orr r2, r2, r0
	strh r2, [r4, #2]
	mov r0, sp
	ldrb r0, [r0]
	strb r0, [r4]
	mov r1, r9
	cmp r1, #240
	bls _080A5F22
	lsl r0, r2, #23
	lsr r0, r0, #23
	mov r1, #128
	lsl r1, r1, #1
	orr r0, r0, r1
	and r0, r0, r5
	and r2, r2, r3
	orr r2, r2, r0
	strh r2, [r4, #2]
_080A5F22:
	mov r2, r8
	add r2, r2, #4
	lsl r0, r2, #16
	ldr r3, [sp, #4]
	lsl r1, r3, #16
	lsr r4, r1, #16
	lsr r0, r0, #18
	lsl r0, r0, #3
	ldr r1, _080A5FC0  @ =gUnknown_03002780
	add r3, r0, r1
	ldr r0, _080A5FB4  @ =gUnknown_03003E68
	ldrb r0, [r0]
	add r7, r2, #0
	mov r9, r1
	cmp r0, #0
	bne _080A5F72
	ldr r0, _080A5FB8  @ =0x000001FF
	add r6, r0, #0
	add r0, r4, #0
	and r0, r0, r6
	ldrh r1, [r3, #2]
	ldr r5, _080A5FBC  @ =0xFFFFFE00
	add r2, r5, #0
	and r2, r2, r1
	orr r2, r2, r0
	strh r2, [r3, #2]
	mov r1, sp
	ldrb r1, [r1]
	strb r1, [r3]
	cmp r4, #240
	bls _080A5F72
	lsl r0, r2, #23
	lsr r0, r0, #23
	mov r1, #128
	lsl r1, r1, #1
	orr r0, r0, r1
	and r0, r0, r6
	and r2, r2, r5
	orr r2, r2, r0
	strh r2, [r3, #2]
_080A5F72:
	mov r2, r8
	lsr r1, r2, #2
	lsl r1, r1, #3
	add r1, r1, r9
	ldrb r3, [r1, #3]
	mov r2, #63
	add r0, r2, #0
	and r0, r0, r3
	strb r0, [r1, #3]
	lsl r0, r7, #16
	lsr r0, r0, #18
	lsl r0, r0, #3
	add r0, r0, r9
	ldrb r1, [r0, #3]
	and r2, r2, r1
	strb r2, [r0, #3]
	add sp, sp, #8
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080A5FA4:
	.4byte gUnknown_08169774
_080A5FA8:
	.4byte 0x000017E2
_080A5FAC:
	.4byte 0x0000CFFF
_080A5FB0:
	.4byte 0x000017EE
_080A5FB4:
	.4byte gUnknown_03003E68
_080A5FB8:
	.4byte 0x000001FF
_080A5FBC:
	.4byte 0xFFFFFE00
_080A5FC0:
	.4byte gUnknown_03002780
	THUMB_FUNC_END sub_080A5D34

