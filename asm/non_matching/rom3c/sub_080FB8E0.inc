	THUMB_FUNC_START sub_080FB8E0
sub_080FB8E0: @ 0x080FB8E0
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	sub sp, sp, #20
	lsl r0, r0, #24
	lsr r5, r0, #24
	ldr r3, _080FB940  @ =gRam
	ldr r1, _080FB944  @ =0x00000F82
	add r0, r3, r1
	add r0, r5, r0
	ldrb r0, [r0]
	cmp r0, #2
	bls _080FB95C
	ldr r2, _080FB948  @ =0x00001132
	add r0, r3, r2
	add r0, r5, r0
	mov r1, #31
	strb r1, [r0]
	ldr r4, _080FB94C  @ =0x00000D84
	add r0, r3, r4
	add r0, r5, r0
	mov r1, #2
	strb r1, [r0]
	mov r1, #0
	ldr r2, _080FB950  @ =0x000009DA
	add r0, r3, r2
	ldrh r0, [r0]
	cmp r0, #105
	bne _080FB920
	mov r1, #1
_080FB920:
	cmp r1, #0
	beq _080FB990
	ldr r4, _080FB954  @ =0x00001022
	add r0, r3, r4
	add r0, r5, r0
	ldrb r0, [r0]
	cmp r0, #11
	bhi _080FB990
	ldr r1, _080FB958  @ =0x00000E75
	add r0, r3, r1
	add r0, r5, r0
	ldrb r1, [r0]
	mov r2, #4
	orr r1, r1, r2
	b _080FB98E
	.byte 0x00
	.byte 0x00
_080FB940:
	.4byte gRam
_080FB944:
	.4byte 0x00000F82
_080FB948:
	.4byte 0x00001132
_080FB94C:
	.4byte 0x00000D84
_080FB950:
	.4byte 0x000009DA
_080FB954:
	.4byte 0x00001022
_080FB958:
	.4byte 0x00000E75
_080FB95C:
	mov r1, #0
	ldr r2, _080FBAA8  @ =0x000009DA
	add r0, r3, r2
	ldrh r0, [r0]
	cmp r0, #105
	bne _080FB96A
	mov r1, #1
_080FB96A:
	cmp r1, #0
	beq _080FB978
	ldr r4, _080FBAAC  @ =0x00001132
	add r0, r3, r4
	add r0, r5, r0
	mov r1, #24
	strb r1, [r0]
_080FB978:
	ldr r0, _080FBAB0  @ =0x00000D94
	add r1, r3, r0
	add r1, r5, r1
	ldrb r2, [r1]
	mov r0, #241
	and r0, r0, r2
	strb r0, [r1]
	ldr r1, _080FBAB4  @ =0x00000D84
	add r0, r3, r1
	add r0, r5, r0
	mov r1, #10
_080FB98E:
	strb r1, [r0]
_080FB990:
	add r0, r5, #0
	bl sub_080FD1A0
	ldr r2, _080FBAB8  @ =gRam
	mov r8, r2
	ldr r0, _080FBABC  @ =0x00000FA2
	add r0, r0, r8
	add r4, r5, r0
	ldrb r0, [r4]
	cmp r0, #6
	bne _080FB9A8
	b _080FBCBE
_080FB9A8:
	ldr r1, _080FBAC0  @ =gUnknown_0817A74A
	mov r0, sp
	mov r2, #3
	bl memcpy
	add r4, sp, #4
	ldr r1, _080FBAC4  @ =gUnknown_0817A74D
	add r0, r4, #0
	mov r2, #3
	bl memcpy
	add r0, r5, #0
	bl Sprite3_CheckIfActive
	lsl r0, r0, #24
	cmp r0, #0
	beq _080FB9CC
	b _080FBDBC
_080FB9CC:
	mov r1, #0
	ldr r0, _080FBAA8  @ =0x000009DA
	add r0, r0, r8
	ldrh r0, [r0]
	cmp r0, #105
	bne _080FB9DA
	mov r1, #1
_080FB9DA:
	add r3, sp, #8
	mov r9, r3
	cmp r1, #0
	beq _080FBA86
	mov r6, #0
	mov r7, #0
	mov r4, r8
	mov r0, #150
	lsl r0, r0, #4
	add r3, r4, r0
	ldr r1, _080FBAC8  @ =0x00000964
	add r2, r4, r1
	add r0, r0, #8
	add r0, r0, r4
	mov r10, r0
	ldr r1, _080FBACC  @ =0x00000EE2
	add r0, r4, r1
	add r0, r0, r5
	mov r8, r0
_080FBA00:
	ldr r1, _080FBAD0  @ =0x00000FF2
	add r0, r4, r1
	add r0, r6, r0
	ldrb r0, [r0]
	cmp r0, #74
	bne _080FBA80
	mov r1, r8
	ldrb r0, [r1]
	strb r0, [r3]
	ldr r1, _080FBAD4  @ =0x00000F02
	add r0, r4, r1
	add r0, r5, r0
	ldrb r0, [r0]
	mov r12, r0
	ldr r1, _080FBAD8  @ =0x00000961
	add r0, r4, r1
	mov r1, r12
	strb r1, [r0]
	ldr r1, _080FBADC  @ =0x00000ED2
	add r0, r4, r1
	add r0, r5, r0
	ldrb r0, [r0]
	strb r0, [r2]
	add r1, r1, #32
	add r0, r4, r1
	add r0, r5, r0
	ldrb r0, [r0]
	mov r12, r0
	ldr r1, _080FBAE0  @ =0x00000965
	add r0, r4, r1
	mov r1, r12
	strb r1, [r0]
	ldr r1, _080FBAE4  @ =0x00001142
	add r0, r4, r1
	add r0, r5, r0
	ldrb r0, [r0]
	mov r1, r10
	strb r0, [r1]
	mov r1, sp
	add r0, r1, r7
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	ldrh r1, [r3]
	add r0, r0, r1
	strh r0, [r3]
	mov r0, sp
	add r0, r0, r7
	add r0, r0, #4
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	ldrh r1, [r2]
	add r0, r0, r1
	strh r0, [r2]
	lsl r0, r6, #24
	lsr r0, r0, #24
	str r2, [sp, #12]
	str r3, [sp, #16]
	bl sub_080CAE50
	add r7, r7, #1
	ldr r3, [sp, #16]
	ldr r2, [sp, #12]
_080FBA80:
	add r6, r6, #1
	cmp r6, #15
	ble _080FBA00
_080FBA86:
	mov r2, #0
	ldr r0, _080FBAB8  @ =gRam
	ldr r3, _080FBAA8  @ =0x000009DA
	add r1, r0, r3
	ldrh r1, [r1]
	add r3, r0, #0
	cmp r1, #105
	bne _080FBA98
	mov r2, #1
_080FBA98:
	cmp r2, #0
	beq _080FBAF0
	ldr r4, _080FBAE8  @ =0x00000F82
	add r1, r3, r4
	add r1, r5, r1
	ldr r2, _080FBAEC  @ =gUnknown_0817A719
	add r4, r4, #160
	b _080FBAFA
_080FBAA8:
	.4byte 0x000009DA
_080FBAAC:
	.4byte 0x00001132
_080FBAB0:
	.4byte 0x00000D94
_080FBAB4:
	.4byte 0x00000D84
_080FBAB8:
	.4byte gRam
_080FBABC:
	.4byte 0x00000FA2
_080FBAC0:
	.4byte gUnknown_0817A74A
_080FBAC4:
	.4byte gUnknown_0817A74D
_080FBAC8:
	.4byte 0x00000964
_080FBACC:
	.4byte 0x00000EE2
_080FBAD0:
	.4byte 0x00000FF2
_080FBAD4:
	.4byte 0x00000F02
_080FBAD8:
	.4byte 0x00000961
_080FBADC:
	.4byte 0x00000ED2
_080FBAE0:
	.4byte 0x00000965
_080FBAE4:
	.4byte 0x00001142
_080FBAE8:
	.4byte 0x00000F82
_080FBAEC:
	.4byte gUnknown_0817A719
_080FBAF0:
	ldr r0, _080FBBD8  @ =0x00000F82
	add r1, r3, r0
	add r1, r5, r1
	ldr r2, _080FBBDC  @ =gUnknown_0817A70C
	ldr r4, _080FBBE0  @ =0x00001022
_080FBAFA:
	add r0, r3, r4
	add r0, r5, r0
	ldrb r0, [r0]
	lsr r0, r0, #2
	add r0, r0, r2
	ldrb r0, [r0]
	strb r0, [r1]
	mov r1, #0
	ldr r2, _080FBBE4  @ =0x000009DA
	add r0, r3, r2
	ldrh r0, [r0]
	cmp r0, #105
	bne _080FBB16
	mov r1, #1
_080FBB16:
	cmp r1, #0
	beq _080FBC10
	ldr r4, _080FBBD8  @ =0x00000F82
	add r0, r3, r4
	add r0, r5, r0
	ldrb r0, [r0]
	cmp r0, #0
	bne _080FBC10
	ldr r1, _080FBBE8  @ =0x00001062
	add r0, r3, r1
	add r0, r5, r0
	ldrb r0, [r0]
	cmp r0, #0
	beq _080FBC10
	mov r6, #0
	add r4, r3, #0
	mov r2, #150
	lsl r2, r2, #4
	add r2, r2, r4
	mov r8, r2
	ldr r3, _080FBBEC  @ =0x00000964
	add r7, r4, r3
	ldr r0, _080FBBF0  @ =0x00000968
	add r0, r0, r4
	mov r10, r0
_080FBB48:
	add r0, r5, #0
	bl sub_080CBBEC
	add r2, r0, #0
	cmp r2, #0
	blt _080FBBC0
	ldr r1, _080FBBF4  @ =0x00000EE2
	add r0, r4, r1
	add r0, r2, r0
	ldrb r0, [r0]
	mov r3, r8
	strb r0, [r3]
	add r1, r1, #32
	add r0, r4, r1
	add r0, r2, r0
	ldrb r1, [r0]
	ldr r3, _080FBBF8  @ =0x00000961
	add r0, r4, r3
	strb r1, [r0]
	ldr r1, _080FBBFC  @ =0x00000ED2
	add r0, r4, r1
	add r0, r2, r0
	ldrb r0, [r0]
	strb r0, [r7]
	ldr r3, _080FBC00  @ =0x00000EF2
	add r0, r4, r3
	add r0, r2, r0
	ldrb r1, [r0]
	ldr r3, _080FBC04  @ =0x00000965
	add r0, r4, r3
	strb r1, [r0]
	ldr r1, _080FBC08  @ =0x00001142
	add r0, r4, r1
	add r0, r2, r0
	ldrb r0, [r0]
	mov r3, r10
	strb r0, [r3]
	mov r1, sp
	add r0, r1, r6
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	mov r3, r8
	ldrh r3, [r3]
	add r0, r0, r3
	mov r1, r8
	strh r0, [r1]
	mov r0, sp
	add r0, r0, r6
	add r0, r0, #4
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	ldrh r3, [r7]
	add r0, r0, r3
	strh r0, [r7]
	lsl r0, r2, #24
	lsr r0, r0, #24
	bl sub_080CAE50
_080FBBC0:
	add r6, r6, #1
	cmp r6, #2
	ble _080FBB48
	ldr r0, _080FBC0C  @ =gRam
	ldr r4, _080FBBE0  @ =0x00001022
	add r0, r0, r4
	add r0, r5, r0
	ldrb r2, [r0]
	mov r1, #252
	and r1, r1, r2
	strb r1, [r0]
	b _080FBC5C
_080FBBD8:
	.4byte 0x00000F82
_080FBBDC:
	.4byte gUnknown_0817A70C
_080FBBE0:
	.4byte 0x00001022
_080FBBE4:
	.4byte 0x000009DA
_080FBBE8:
	.4byte 0x00001062
_080FBBEC:
	.4byte 0x00000964
_080FBBF0:
	.4byte 0x00000968
_080FBBF4:
	.4byte 0x00000EE2
_080FBBF8:
	.4byte 0x00000961
_080FBBFC:
	.4byte 0x00000ED2
_080FBC00:
	.4byte 0x00000EF2
_080FBC04:
	.4byte 0x00000965
_080FBC08:
	.4byte 0x00001142
_080FBC0C:
	.4byte gRam
_080FBC10:
	ldr r2, _080FBC34  @ =gRam
	ldr r1, _080FBC38  @ =0x00000F82
	add r0, r2, r1
	add r0, r5, r0
	ldrb r1, [r0]
	cmp r1, #3
	beq _080FBC40
	ldr r3, _080FBC3C  @ =0x00001062
	add r0, r2, r3
	add r0, r5, r0
	ldrb r0, [r0]
	cmp r1, r0
	beq _080FBC5C
	add r0, r5, #0
	bl sub_080FD164
	b _080FBC5C
	.byte 0x00
	.byte 0x00
_080FBC34:
	.4byte gRam
_080FBC38:
	.4byte 0x00000F82
_080FBC3C:
	.4byte 0x00001062
_080FBC40:
	ldr r4, _080FBC9C  @ =0x00001062
	add r0, r2, r4
	add r0, r5, r0
	ldrb r0, [r0]
	cmp r1, r0
	beq _080FBC5C
	ldr r1, _080FBCA0  @ =0x000010C2
	add r0, r2, r1
	add r0, r5, r0
	mov r1, #0
	strb r1, [r0]
	add r0, r5, #0
	bl sub_080FC550
_080FBC5C:
	ldr r4, _080FBCA4  @ =gRam
	ldr r2, _080FBC9C  @ =0x00001062
	add r1, r4, r2
	add r1, r5, r1
	ldr r3, _080FBCA8  @ =0x00000F82
	add r0, r4, r3
	add r0, r5, r0
	ldrb r0, [r0]
	strb r0, [r1]
	mov r0, r9
	add r1, r5, #0
	bl sub_080C4948
	add r0, r5, #0
	bl sub_080FC204
	add r0, r5, #0
	bl sub_080FC4D4
	add r0, r5, #0
	bl sub_080FC3E8
	ldr r0, _080FBCAC  @ =0x00000FD2
	add r4, r4, r0
	add r4, r5, r4
	ldrb r0, [r4]
	cmp r0, #0
	bne _080FBCB0
	add r0, r5, #0
	bl sub_080FBF28
	b _080FBDBC
_080FBC9C:
	.4byte 0x00001062
_080FBCA0:
	.4byte 0x000010C2
_080FBCA4:
	.4byte gRam
_080FBCA8:
	.4byte 0x00000F82
_080FBCAC:
	.4byte 0x00000FD2
_080FBCB0:
	cmp r0, #96
	beq _080FBCB6
	b _080FBDBC
_080FBCB6:
	add r0, r5, #0
	bl sub_080FCFA8
	b _080FBDBC
_080FBCBE:
	ldr r0, _080FBD7C  @ =0x00000FC2
	add r0, r0, r8
	add r2, r5, r0
	ldrb r3, [r2]
	add r1, r3, #0
	cmp r1, #0
	beq _080FBDAC
	ldr r0, _080FBD80  @ =0x000010C2
	add r0, r0, r8
	add r0, r5, r0
	mov r1, #240
	orr r1, r1, r3
	strb r1, [r0]
	ldrb r1, [r2]
	mov r0, #0
	ldrsb r0, [r2, r0]
	cmp r0, #0
	blt _080FBDBC
	mov r0, #7
	and r0, r0, r1
	cmp r0, #0
	bne _080FBDBC
	ldr r1, _080FBD84  @ =gUnknown_020109BC
	ldrb r0, [r1]
	cmp r0, #16
	beq _080FBDBC
	add r2, r0, #0
	add r0, r2, #1
	strb r0, [r1]
	mov r4, #0
	sub r1, r1, #39
	add r3, r2, r1
	ldrb r1, [r3]
	mov r6, #128
	add r0, r6, #0
	and r0, r0, r1
	cmp r0, #0
	beq _080FBD0C
	mov r4, #255
_080FBD0C:
	ldr r0, _080FBD88  @ =0x00000EE2
	add r0, r0, r8
	add r0, r5, r0
	ldrb r1, [r0]
	ldr r0, _080FBD8C  @ =0x00000F02
	add r0, r0, r8
	add r0, r5, r0
	ldrb r0, [r0]
	lsl r0, r0, #8
	orr r1, r1, r0
	ldrb r3, [r3]
	add r1, r1, r3
	lsl r0, r4, #8
	add r1, r1, r0
	ldr r0, _080FBD90  @ =0x00001622
	add r0, r0, r8
	strb r1, [r0]
	lsr r1, r1, #8
	ldr r0, _080FBD94  @ =0x00001623
	add r0, r0, r8
	strb r1, [r0]
	mov r4, #0
	ldr r3, _080FBD98  @ =gUnknown_020109A5
	add r2, r2, r3
	ldrb r1, [r2]
	add r0, r6, #0
	and r0, r0, r1
	cmp r0, #0
	beq _080FBD48
	mov r4, #255
_080FBD48:
	ldr r0, _080FBD9C  @ =0x00000ED2
	add r0, r0, r8
	add r0, r5, r0
	ldrb r1, [r0]
	ldr r0, _080FBDA0  @ =0x00000EF2
	add r0, r0, r8
	add r0, r5, r0
	ldrb r0, [r0]
	lsl r0, r0, #8
	orr r1, r1, r0
	ldrb r2, [r2]
	add r1, r1, r2
	lsl r0, r4, #8
	add r1, r1, r0
	ldr r0, _080FBDA4  @ =0x00001624
	add r0, r0, r8
	strb r1, [r0]
	lsr r1, r1, #8
	ldr r0, _080FBDA8  @ =0x00001625
	add r0, r0, r8
	strb r1, [r0]
	add r0, r5, #0
	bl sub_080D9844
	b _080FBDBC
	.byte 0x00
	.byte 0x00
_080FBD7C:
	.4byte 0x00000FC2
_080FBD80:
	.4byte 0x000010C2
_080FBD84:
	.4byte gUnknown_020109BC
_080FBD88:
	.4byte 0x00000EE2
_080FBD8C:
	.4byte 0x00000F02
_080FBD90:
	.4byte 0x00001622
_080FBD94:
	.4byte 0x00001623
_080FBD98:
	.4byte gUnknown_020109A5
_080FBD9C:
	.4byte 0x00000ED2
_080FBDA0:
	.4byte 0x00000EF2
_080FBDA4:
	.4byte 0x00001624
_080FBDA8:
	.4byte 0x00001625
_080FBDAC:
	mov r0, #4
	strb r0, [r4]
	ldr r0, _080FBDCC  @ =0x00000F62
	add r0, r0, r8
	add r0, r5, r0
	strb r1, [r0]
	mov r0, #224
	strb r0, [r2]
_080FBDBC:
	add sp, sp, #20
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r0}
	bx r0
_080FBDCC:
	.4byte 0x00000F62
	THUMB_FUNC_END sub_080FB8E0

