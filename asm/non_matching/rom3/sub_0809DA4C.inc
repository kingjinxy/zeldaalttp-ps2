	THUMB_FUNC_START sub_0809DA4C
sub_0809DA4C: @ 0x0809DA4C
	push {r4-r6,lr}
	ldr r0, _0809DA84  @ =gRam
	ldr r1, _0809DA88  @ =0x00001805
	add r2, r0, r1
	ldrb r3, [r2]
	add r5, r0, #0
	cmp r3, #0
	bne _0809DA5E
	b _0809DB88
_0809DA5E:
	ldr r4, _0809DA8C  @ =0x00001710
	add r0, r5, r4
	ldrb r0, [r0]
	cmp r0, #0
	bne _0809DA72
	sub r1, r1, #224
	add r0, r5, r1
	ldrb r0, [r0]
	cmp r0, #0
	beq _0809DA98
_0809DA72:
	mov r0, #0
	strb r0, [r2]
	ldr r2, _0809DA90  @ =0x00001702
	add r1, r5, r2
	strb r0, [r1]
	ldr r3, _0809DA94  @ =0x000016F8
	add r1, r5, r3
	strb r0, [r1]
	b _0809DB88
_0809DA84:
	.4byte gRam
_0809DA88:
	.4byte 0x00001805
_0809DA8C:
	.4byte 0x00001710
_0809DA90:
	.4byte 0x00001702
_0809DA94:
	.4byte 0x000016F8
_0809DA98:
	ldr r4, _0809DB4C  @ =0x0000180D
	add r0, r5, r4
	ldrb r1, [r0]
	cmp r1, #0
	bne _0809DB88
	mov r4, #150
	lsl r4, r4, #4
	add r0, r5, r4
	strb r3, [r0]
	strb r1, [r2]
	ldr r0, _0809DB50  @ =0x00000E15
	add r1, r5, r0
	ldrb r0, [r1]
	cmp r0, #5
	bne _0809DAD2
	ldr r2, _0809DB54  @ =0x00001789
	add r0, r5, r2
	ldrb r2, [r0]
	cmp r2, #0
	bne _0809DAD2
	ldr r3, _0809DB58  @ =0x000016EB
	add r0, r5, r3
	ldrb r0, [r0]
	cmp r0, #0
	beq _0809DAD2
	strb r2, [r1]
	ldr r4, _0809DB5C  @ =0x000017F0
	add r0, r5, r4
	strb r2, [r0]
_0809DAD2:
	ldr r4, _0809DB60  @ =gRam
	ldr r0, _0809DB64  @ =0x000017AA
	add r6, r4, r0
	ldrb r0, [r6]
	cmp r0, #0
	bne _0809DAE2
	mov r0, #58
	strb r0, [r6]
_0809DAE2:
	mov r0, #7
	bl sub_0809E43C
	ldr r2, _0809DB68  @ =0x00000ECE
	add r1, r4, r2
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	ldr r5, _0809DB6C  @ =gMaxHealth
	mov r3, #150
	lsl r3, r3, #4
	add r1, r4, r3
	ldrb r0, [r5]
	ldrb r1, [r1]
	sub r0, r0, r1
	lsl r0, r0, #24
	lsr r1, r0, #24
	mov r2, #255
	lsl r2, r2, #24
	add r0, r0, r2
	lsr r0, r0, #24
	cmp r0, #166
	bls _0809DB84
	add r3, r3, #84
	add r0, r4, r3
	ldrb r1, [r0]
	ldr r2, _0809DB70  @ =0x00001AC5
	add r0, r4, r2
	strb r1, [r0]
	add r3, r3, #1
	add r0, r4, r3
	ldrb r1, [r0]
	add r2, r2, #1
	add r0, r4, r2
	strb r1, [r0]
	ldr r0, _0809DB74  @ =0x000009AC
	add r3, r4, r0
	ldrb r1, [r3]
	ldr r2, _0809DB78  @ =0x00000A1A
	add r0, r4, r2
	mov r2, #0
	strh r1, [r0]
	mov r0, #18
	strb r0, [r3]
	ldr r3, _0809DB7C  @ =0x000009AD
	add r1, r4, r3
	mov r0, #1
	strb r0, [r1]
	strb r2, [r6]
	ldr r0, _0809DB80  @ =gHeartsFiller
	strb r2, [r0]
	strb r2, [r5]
	b _0809DB86
_0809DB4C:
	.4byte 0x0000180D
_0809DB50:
	.4byte 0x00000E15
_0809DB54:
	.4byte 0x00001789
_0809DB58:
	.4byte 0x000016EB
_0809DB5C:
	.4byte 0x000017F0
_0809DB60:
	.4byte gRam
_0809DB64:
	.4byte 0x000017AA
_0809DB68:
	.4byte 0x00000ECE
_0809DB6C:
	.4byte gMaxHealth
_0809DB70:
	.4byte 0x00001AC5
_0809DB74:
	.4byte 0x000009AC
_0809DB78:
	.4byte 0x00000A1A
_0809DB7C:
	.4byte 0x000009AD
_0809DB80:
	.4byte gHeartsFiller
_0809DB84:
	strb r1, [r5]
_0809DB86:
	add r5, r4, #0
_0809DB88:
	add r1, r5, #0
	ldr r0, _0809DC0C  @ =0x00001718
	add r4, r1, r0
	ldrb r0, [r4]
	cmp r0, #4
	beq _0809DB9C
	ldr r2, _0809DC10  @ =0x00001725
	add r1, r1, r2
	mov r0, #0
	strb r0, [r1]
_0809DB9C:
	ldrb r0, [r4]
	cmp r0, #0
	beq _0809DBA6
	bl sub_080A3920
_0809DBA6:
	ldr r1, _0809DC14  @ =gUnknown_081680AC
	ldrb r0, [r4]
	lsl r0, r0, #2
	add r0, r0, r1
	ldr r0, [r0]
	bl _call_via_r0
	ldr r3, _0809DC18  @ =0x000009AC
	add r0, r5, r3
	ldrb r0, [r0]
	cmp r0, #18
	bne _0809DC34
	ldr r4, _0809DC1C  @ =0x000016C1
	add r0, r5, r4
	ldrb r1, [r0]
	ldr r2, _0809DC20  @ =0x000016ED
	add r0, r5, r2
	strb r1, [r0]
	ldr r3, _0809DC24  @ =0x000016C5
	add r0, r5, r3
	ldrb r1, [r0]
	add r4, r4, #48
	add r0, r5, r4
	strb r1, [r0]
	ldr r1, _0809DC28  @ =0x00001608
	add r0, r5, r1
	ldrh r1, [r0]
	sub r2, r2, #41
	add r0, r5, r2
	strh r1, [r0]
	sub r3, r3, #185
	add r0, r5, r3
	ldrh r1, [r0]
	sub r4, r4, #49
	add r0, r5, r4
	strh r1, [r0]
	ldr r1, _0809DC2C  @ =0x000009B2
	add r0, r5, r1
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	cmp r0, #0
	beq _0809DC34
	add r2, r2, #104
	add r0, r5, r2
	ldrb r0, [r0]
	cmp r0, #0
	beq _0809DC30
	bl sub_0809B0DC
	b _0809DC34
_0809DC0C:
	.4byte 0x00001718
_0809DC10:
	.4byte 0x00001725
_0809DC14:
	.4byte gUnknown_081680AC
_0809DC18:
	.4byte 0x000009AC
_0809DC1C:
	.4byte 0x000016C1
_0809DC20:
	.4byte 0x000016ED
_0809DC24:
	.4byte 0x000016C5
_0809DC28:
	.4byte 0x00001608
_0809DC2C:
	.4byte 0x000009B2
_0809DC30:
	bl sub_0809B2AC
_0809DC34:
	pop {r4-r6}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_0809DA4C

	.byte 0x00
	.byte 0x00
