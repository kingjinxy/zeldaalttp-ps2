	THUMB_FUNC_START sub_08096E4C
sub_08096E4C: @ 0x08096E4C
	push {r4,r5,lr}
	mov r3, #6
	ldr r1, _08096EC4  @ =gRam
	ldr r2, _08096EC8  @ =0x00001806
	add r0, r1, r2
	ldrb r0, [r0]
	add r4, r1, #0
	cmp r0, #0
	beq _08096E74
	add r1, r0, #0
	ldr r2, _08096ECC  @ =gUnknown_08167DA4
_08096E62:
	add r0, r3, r2
	ldrb r0, [r0]
	cmp r1, r0
	bcc _08096E74
	sub r0, r3, #1
	lsl r0, r0, #24
	lsr r3, r0, #24
	cmp r0, #0
	blt _08096E62
_08096E74:
	ldr r1, _08096ED0  @ =0x000016EA
	add r0, r4, r1
	ldrb r0, [r0]
	cmp r0, #8
	bhi _08096EE4
	ldr r2, _08096ED4  @ =0x000017E1
	add r0, r4, r2
	ldrb r5, [r0]
	cmp r5, #0
	bne _08096EE4
	lsl r0, r3, #27
	lsr r3, r0, #24
	ldr r0, _08096ED8  @ =gUnknown_08167D65
	add r0, r3, r0
	ldrb r0, [r0]
	mov r1, #150
	lsl r1, r1, #4
	add r2, r4, r1
	strb r0, [r2]
	ldr r0, _08096EDC  @ =0x000016D3
	add r3, r4, r0
	ldrb r0, [r3]
	add r0, r0, #1
	strb r0, [r3]
	ldrb r1, [r3]
	mov r0, #0
	ldrsb r0, [r2, r0]
	cmp r1, r0
	blt _08096F1E
	strb r5, [r3]
	ldr r2, _08096EE0  @ =0x000016D4
	add r1, r4, r2
	ldrb r0, [r1]
	add r0, r0, #1
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #9
	bne _08096F1C
	mov r0, #1
	b _08096F1C
_08096EC4:
	.4byte gRam
_08096EC8:
	.4byte 0x00001806
_08096ECC:
	.4byte gUnknown_08167DA4
_08096ED0:
	.4byte 0x000016EA
_08096ED4:
	.4byte 0x000017E1
_08096ED8:
	.4byte gUnknown_08167D65
_08096EDC:
	.4byte 0x000016D3
_08096EE0:
	.4byte 0x000016D4
_08096EE4:
	ldr r0, _08096F24  @ =gUnknown_08167D9D
	add r0, r3, r0
	ldrb r0, [r0]
	mov r1, #150
	lsl r1, r1, #4
	add r2, r4, r1
	strb r0, [r2]
	ldr r0, _08096F28  @ =0x000016D3
	add r3, r4, r0
	ldrb r0, [r3]
	add r0, r0, #1
	strb r0, [r3]
	ldrb r1, [r3]
	mov r0, #0
	ldrsb r0, [r2, r0]
	cmp r1, r0
	blt _08096F1E
	mov r0, #0
	strb r0, [r3]
	ldr r2, _08096F2C  @ =0x000016D4
	add r1, r4, r2
	ldrb r0, [r1]
	add r0, r0, #1
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #5
	bls _08096F1C
	mov r0, #0
_08096F1C:
	strb r0, [r1]
_08096F1E:
	pop {r4,r5}
	pop {r0}
	bx r0
_08096F24:
	.4byte gUnknown_08167D9D
_08096F28:
	.4byte 0x000016D3
_08096F2C:
	.4byte 0x000016D4
	THUMB_FUNC_END sub_08096E4C

