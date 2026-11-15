	THUMB_FUNC_START sub_080A47E4
sub_080A47E4: @ 0x080A47E4
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	ldr r1, _080A4828  @ =gRam
	ldr r2, _080A482C  @ =0x0000173E
	add r0, r1, r2
	mov r2, #0
	strh r2, [r0]
	mov r3, #186
	lsl r3, r3, #5
	add r0, r1, r3
	strh r2, [r0]
	mov r6, #12
	mov r8, r1
	mov r3, r8
	ldr r0, _080A4830  @ =0x000017E4
	add r0, r0, r8
	ldr r2, _080A4834  @ =gUnknown_0816B350
	ldrb r1, [r0]
_080A480E:
	lsr r0, r6, #1
	lsl r0, r0, #1
	add r0, r0, r2
	ldrh r0, [r0]
	cmp r1, r0
	beq _080A4838
	sub r0, r6, #2
	lsl r0, r0, #16
	lsr r6, r0, #16
	cmp r0, #0
	bge _080A480E
	b _080A4B86
	.byte 0x00
	.byte 0x00
_080A4828:
	.4byte gRam
_080A482C:
	.4byte 0x0000173E
_080A4830:
	.4byte 0x000017E4
_080A4834:
	.4byte gUnknown_0816B350
_080A4838:
	mov r0, #255
	ldr r5, _080A48B4  @ =0x00001734
	add r5, r5, r8
	and r6, r6, r0
	ldrb r1, [r5]
	add r0, r6, r1
	ldr r2, _080A48B8  @ =0x00001736
	add r2, r2, r8
	ldr r1, _080A48BC  @ =gUnknown_08169CA2
	lsr r0, r0, #1
	lsl r0, r0, #1
	add r0, r0, r1
	ldrb r0, [r0]
	ldrb r2, [r2]
	add r0, r0, r2
	strb r0, [r5]
	ldrb r4, [r5]
	ldr r1, _080A48C0  @ =gUnknown_08169BAA
	add r0, r4, r1
	ldrb r0, [r0]
	mov r9, r1
	cmp r0, #255
	bne _080A4868
	b _080A49D6
_080A4868:
	lsl r1, r0, #1
	ldr r2, _080A48C4  @ =0x0000173E
	add r0, r3, r2
	strh r1, [r0]
	ldr r1, _080A48C8  @ =gUnknown_0816B2F0
	sub r2, r2, #12
	add r0, r3, r2
	ldrb r0, [r0]
	lsl r0, r0, #2
	add r0, r0, r1
	ldr r1, [r0]
	ldr r2, _080A48CC  @ =0x00000968
	add r0, r3, r2
	ldrh r4, [r0]
	add r1, r1, r4
	ldr r2, _080A48D0  @ =0x000017E2
	add r0, r3, r2
	ldrh r0, [r0]
	ldrb r1, [r1]
	add r0, r0, r1
	lsl r0, r0, #16
	lsr r6, r0, #16
	ldrb r4, [r5]
	ldr r1, _080A48D4  @ =0x000016C9
	add r0, r3, r1
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	cmp r0, #0
	bge _080A48DC
	ldr r2, _080A48D8  @ =0x000016C8
	add r0, r3, r2
	ldrb r0, [r0]
	cmp r0, #239
	bls _080A48E2
	mov r0, #0
	b _080A48E2
	.byte 0x00
	.byte 0x00
_080A48B4:
	.4byte 0x00001734
_080A48B8:
	.4byte 0x00001736
_080A48BC:
	.4byte gUnknown_08169CA2
_080A48C0:
	.4byte gUnknown_08169BAA
_080A48C4:
	.4byte 0x0000173E
_080A48C8:
	.4byte gUnknown_0816B2F0
_080A48CC:
	.4byte 0x00000968
_080A48D0:
	.4byte 0x000017E2
_080A48D4:
	.4byte 0x000016C9
_080A48D8:
	.4byte 0x000016C8
_080A48DC:
	ldr r1, _080A4A38  @ =0x000016C8
	add r0, r3, r1
	ldrb r0, [r0]
_080A48E2:
	ldr r2, _080A4A3C  @ =0x0000097D
	add r2, r2, r8
	mov r1, #0
	strb r0, [r2]
	ldr r0, _080A4A40  @ =0x0000097C
	add r0, r0, r8
	strb r1, [r0]
	ldr r1, _080A4A44  @ =0x00000961
	add r1, r1, r8
	ldr r0, _080A4A48  @ =gUnknown_0816A4F6
	add r0, r4, r0
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	ldrb r1, [r1]
	add r0, r0, r1
	mov r1, #0
	ldrsb r1, [r2, r1]
	sub r0, r0, r1
	lsl r0, r0, #16
	lsr r7, r0, #16
	mov r1, #150
	lsl r1, r1, #4
	add r1, r1, r8
	ldr r0, _080A4A4C  @ =gUnknown_0816A572
	add r0, r4, r0
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	ldrb r1, [r1]
	add r0, r0, r1
	lsl r0, r0, #16
	lsr r5, r0, #16
	lsr r0, r6, #2
	lsl r0, r0, #3
	mov r1, #170
	lsl r1, r1, #3
	add r1, r1, r8
	add r2, r0, r1
	ldr r0, _080A4A50  @ =gUnknown_03003E68
	ldrb r0, [r0]
	lsr r3, r6, #2
	mov r10, r3
	cmp r0, #0
	bne _080A496E
	ldr r0, _080A4A54  @ =0x000001FF
	mov r8, r0
	add r0, r5, #0
	mov r1, r8
	and r0, r0, r1
	ldrh r1, [r2, #2]
	ldr r3, _080A4A58  @ =0xFFFFFE00
	mov r12, r3
	and r3, r3, r1
	orr r3, r3, r0
	strh r3, [r2, #2]
	strb r7, [r2]
	cmp r5, #240
	bls _080A496E
	lsl r0, r3, #23
	lsr r0, r0, #23
	mov r1, #128
	lsl r1, r1, #1
	orr r0, r0, r1
	mov r1, r8
	and r0, r0, r1
	mov r1, r12
	and r3, r3, r1
	orr r3, r3, r0
	strh r3, [r2, #2]
_080A496E:
	ldr r5, _080A4A5C  @ =gRam
	mov r2, r9
	add r0, r4, r2
	ldrb r1, [r0]
	ldr r3, _080A4A60  @ =0x0000096C
	add r0, r5, r3
	strh r1, [r0]
	lsr r4, r1, #1
	ldr r0, _080A4A64  @ =gUnknown_0816951F
	add r0, r4, r0
	ldrb r0, [r0]
	lsl r4, r0, #8
	mov r0, #1
	and r1, r1, r0
	cmp r1, #0
	beq _080A4992
	lsl r0, r4, #20
	lsr r4, r0, #16
_080A4992:
	mov r0, #192
	lsl r0, r0, #8
	and r4, r4, r0
	ldr r1, _080A4A68  @ =0x00001723
	add r0, r5, r1
	ldrb r1, [r0]
	ldr r2, _080A4A6C  @ =0x00001724
	add r0, r5, r2
	ldrb r0, [r0]
	lsl r0, r0, #8
	add r1, r1, r0
	orr r4, r4, r1
	ldr r3, _080A4A70  @ =0x000017D6
	add r0, r5, r3
	ldrh r0, [r0]
	orr r4, r4, r0
	mov r0, #4
	orr r4, r4, r0
	lsl r0, r4, #16
	lsr r1, r0, #16
	add r0, r6, #0
	bl sub_080A452C
	mov r0, r10
	lsl r1, r0, #16
	lsr r1, r1, #13
	mov r2, #170
	lsl r2, r2, #3
	add r0, r5, r2
	add r1, r1, r0
	ldrb r2, [r1, #3]
	mov r0, #63
	and r0, r0, r2
	strb r0, [r1, #3]
_080A49D6:
	ldr r2, _080A4A74  @ =gUnknown_08169C26
	ldr r1, _080A4A5C  @ =gRam
	ldr r0, _080A4A78  @ =0x00001734
	add r3, r1, r0
	ldrb r0, [r3]
	add r0, r0, r2
	ldrb r0, [r0]
	mov r8, r1
	cmp r0, #255
	bne _080A49EC
	b _080A4B86
_080A49EC:
	lsl r1, r0, #1
	mov r0, #186
	lsl r0, r0, #5
	add r0, r0, r8
	strh r1, [r0]
	ldr r1, _080A4A7C  @ =gUnknown_0816B2F8
	ldr r0, _080A4A80  @ =0x00001732
	add r0, r0, r8
	ldrb r0, [r0]
	lsl r0, r0, #2
	add r0, r0, r1
	ldr r1, [r0]
	ldr r0, _080A4A84  @ =0x00000968
	add r0, r0, r8
	ldrh r4, [r0]
	add r1, r1, r4
	ldr r0, _080A4A88  @ =0x000017E2
	add r0, r0, r8
	ldrh r0, [r0]
	ldrb r1, [r1]
	add r0, r0, r1
	lsl r0, r0, #16
	lsr r6, r0, #16
	ldrb r4, [r3]
	ldr r0, _080A4A8C  @ =0x000016C9
	add r0, r0, r8
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	cmp r0, #0
	bge _080A4A90
	ldr r0, _080A4A38  @ =0x000016C8
	add r0, r0, r8
	ldrb r0, [r0]
	cmp r0, #239
	bls _080A4A96
	mov r0, #0
	b _080A4A96
_080A4A38:
	.4byte 0x000016C8
_080A4A3C:
	.4byte 0x0000097D
_080A4A40:
	.4byte 0x0000097C
_080A4A44:
	.4byte 0x00000961
_080A4A48:
	.4byte gUnknown_0816A4F6
_080A4A4C:
	.4byte gUnknown_0816A572
_080A4A50:
	.4byte gUnknown_03003E68
_080A4A54:
	.4byte 0x000001FF
_080A4A58:
	.4byte 0xFFFFFE00
_080A4A5C:
	.4byte gRam
_080A4A60:
	.4byte 0x0000096C
_080A4A64:
	.4byte gUnknown_0816951F
_080A4A68:
	.4byte 0x00001723
_080A4A6C:
	.4byte 0x00001724
_080A4A70:
	.4byte 0x000017D6
_080A4A74:
	.4byte gUnknown_08169C26
_080A4A78:
	.4byte 0x00001734
_080A4A7C:
	.4byte gUnknown_0816B2F8
_080A4A80:
	.4byte 0x00001732
_080A4A84:
	.4byte 0x00000968
_080A4A88:
	.4byte 0x000017E2
_080A4A8C:
	.4byte 0x000016C9
_080A4A90:
	ldr r0, _080A4B94  @ =0x000016C8
	add r0, r0, r8
	ldrb r0, [r0]
_080A4A96:
	ldr r2, _080A4B98  @ =0x0000097D
	add r2, r2, r8
	mov r1, #0
	strb r0, [r2]
	ldr r0, _080A4B9C  @ =0x0000097C
	add r0, r0, r8
	strb r1, [r0]
	ldr r0, _080A4BA0  @ =gUnknown_0816A5EE
	add r0, r4, r0
	ldr r1, _080A4BA4  @ =0x00000961
	add r1, r1, r8
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	ldrb r1, [r1]
	add r0, r0, r1
	mov r1, #0
	ldrsb r1, [r2, r1]
	sub r0, r0, r1
	lsl r0, r0, #16
	lsr r7, r0, #16
	ldr r0, _080A4BA8  @ =gUnknown_0816A66A
	add r0, r4, r0
	mov r1, #150
	lsl r1, r1, #4
	add r1, r1, r8
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	ldrb r1, [r1]
	add r0, r0, r1
	lsl r0, r0, #16
	lsr r5, r0, #16
	lsr r2, r6, #2
	lsl r1, r2, #3
	mov r0, #170
	lsl r0, r0, #3
	add r0, r0, r8
	add r3, r1, r0
	ldr r0, _080A4BAC  @ =gUnknown_03003E68
	ldrb r0, [r0]
	mov r10, r2
	cmp r0, #0
	bne _080A4B20
	ldr r1, _080A4BB0  @ =0x000001FF
	mov r9, r1
	add r0, r5, #0
	mov r2, r9
	and r0, r0, r2
	ldrh r1, [r3, #2]
	ldr r2, _080A4BB4  @ =0xFFFFFE00
	mov r12, r2
	and r2, r2, r1
	orr r2, r2, r0
	strh r2, [r3, #2]
	strb r7, [r3]
	cmp r5, #240
	bls _080A4B20
	lsl r0, r2, #23
	lsr r0, r0, #23
	mov r1, #128
	lsl r1, r1, #1
	orr r0, r0, r1
	mov r1, r9
	and r0, r0, r1
	mov r1, r12
	and r2, r2, r1
	orr r2, r2, r0
	strh r2, [r3, #2]
_080A4B20:
	ldr r2, _080A4BB8  @ =gUnknown_08169C26
	add r0, r4, r2
	ldrb r1, [r0]
	ldr r0, _080A4BBC  @ =0x0000096C
	add r0, r0, r8
	strh r1, [r0]
	lsr r4, r1, #1
	ldr r0, _080A4BC0  @ =gUnknown_0816951F
	add r0, r4, r0
	ldrb r0, [r0]
	lsl r4, r0, #8
	mov r0, #1
	and r1, r1, r0
	cmp r1, #0
	beq _080A4B42
	lsl r0, r4, #20
	lsr r4, r0, #16
_080A4B42:
	mov r0, #192
	lsl r0, r0, #8
	and r4, r4, r0
	ldr r0, _080A4BC4  @ =0x00001723
	add r0, r0, r8
	ldrb r1, [r0]
	ldr r0, _080A4BC8  @ =0x00001724
	add r0, r0, r8
	ldrb r0, [r0]
	lsl r0, r0, #8
	add r1, r1, r0
	orr r4, r4, r1
	ldr r0, _080A4BCC  @ =0x000017D6
	add r0, r0, r8
	ldrh r0, [r0]
	orr r4, r4, r0
	mov r0, #36
	orr r4, r4, r0
	lsl r0, r4, #16
	lsr r1, r0, #16
	add r0, r6, #0
	bl sub_080A452C
	mov r3, r10
	lsl r1, r3, #16
	lsr r1, r1, #13
	mov r0, #170
	lsl r0, r0, #3
	add r0, r0, r8
	add r1, r1, r0
	ldrb r2, [r1, #3]
	mov r0, #63
	and r0, r0, r2
	strb r0, [r1, #3]
_080A4B86:
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r0}
	bx r0
_080A4B94:
	.4byte 0x000016C8
_080A4B98:
	.4byte 0x0000097D
_080A4B9C:
	.4byte 0x0000097C
_080A4BA0:
	.4byte gUnknown_0816A5EE
_080A4BA4:
	.4byte 0x00000961
_080A4BA8:
	.4byte gUnknown_0816A66A
_080A4BAC:
	.4byte gUnknown_03003E68
_080A4BB0:
	.4byte 0x000001FF
_080A4BB4:
	.4byte 0xFFFFFE00
_080A4BB8:
	.4byte gUnknown_08169C26
_080A4BBC:
	.4byte 0x0000096C
_080A4BC0:
	.4byte gUnknown_0816951F
_080A4BC4:
	.4byte 0x00001723
_080A4BC8:
	.4byte 0x00001724
_080A4BCC:
	.4byte 0x000017D6
	THUMB_FUNC_END sub_080A47E4

