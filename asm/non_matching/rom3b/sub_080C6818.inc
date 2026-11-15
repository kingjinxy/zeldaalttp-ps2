	THUMB_FUNC_START sub_080C6818
sub_080C6818: @ 0x080C6818
	push {r4-r7,lr}
	mov r7, r8
	push {r7}
	lsl r0, r0, #24
	lsr r7, r0, #24
	ldr r1, _080C6898  @ =gRam
	ldr r2, _080C689C  @ =0x00000FF2
	add r0, r1, r2
	add r2, r7, r0
	ldrb r0, [r2]
	mov r8, r1
	cmp r0, #190
	bne _080C683C
	ldr r1, _080C68A0  @ =0x000010A2
	add r1, r1, r8
	ldrb r0, [r1]
	sub r0, r0, #1
	strb r0, [r1]
_080C683C:
	ldrb r0, [r2]
	cmp r0, #170
	bne _080C68BC
	ldr r0, _080C68A4  @ =0x00001062
	add r0, r0, r8
	add r0, r7, r0
	ldrb r5, [r0]
	cmp r5, #0
	beq _080C68BC
	ldr r1, _080C68A8  @ =gUnknown_08172176
	sub r0, r5, #1
	add r0, r0, r1
	ldrb r6, [r0]
	ldr r4, _080C68AC  @ =0x00001002
	add r4, r4, r8
	add r4, r7, r4
	ldrb r5, [r4]
	add r0, r7, #0
	add r1, r6, #0
	bl sub_080C66A4
	strb r5, [r4]
	sub r0, r5, #1
	lsl r0, r0, #24
	cmp r0, #0
	bne _080C6888
	cmp r6, #230
	bne _080C6888
	ldr r0, _080C68B0  @ =0x00001122
	add r0, r0, r8
	add r0, r7, r0
	mov r1, #9
	strb r1, [r0]
	ldr r0, _080C68B4  @ =0x00001032
	add r0, r0, r8
	add r0, r7, r0
	mov r1, #240
	strb r1, [r0]
_080C6888:
	ldr r1, _080C6898  @ =gRam
	ldr r4, _080C68B8  @ =0x00001082
	add r1, r1, r4
	add r1, r7, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	b _080C6A18
_080C6898:
	.4byte gRam
_080C689C:
	.4byte 0x00000FF2
_080C68A0:
	.4byte 0x000010A2
_080C68A4:
	.4byte 0x00001062
_080C68A8:
	.4byte gUnknown_08172176
_080C68AC:
	.4byte 0x00001002
_080C68B0:
	.4byte 0x00001122
_080C68B4:
	.4byte 0x00001032
_080C68B8:
	.4byte 0x00001082
_080C68BC:
	ldr r0, _080C68E0  @ =0x00000FF2
	add r0, r0, r8
	add r0, r7, r0
	ldrb r0, [r0]
	cmp r0, #248
	bne _080C68E8
	ldr r0, _080C68E4  @ =0x00001002
	add r0, r0, r8
	add r0, r7, r0
	ldrb r0, [r0]
	cmp r0, #0
	beq _080C68E8
	add r0, r7, #0
	mov r1, #230
	bl sub_080C66A4
	b _080C6A18
	.byte 0x00
	.byte 0x00
_080C68E0:
	.4byte 0x00000FF2
_080C68E4:
	.4byte 0x00001002
_080C68E8:
	ldr r0, _080C6944  @ =0x00000FF2
	add r0, r0, r8
	add r0, r7, r0
	ldrb r0, [r0]
	cmp r0, #69
	bne _080C6912
	ldr r0, _080C6948  @ =0x0000165E
	add r0, r0, r8
	ldrb r0, [r0]
	cmp r0, #2
	bne _080C6912
	mov r0, #171
	lsl r0, r0, #4
	add r0, r0, r8
	ldrh r0, [r0]
	cmp r0, #24
	bne _080C6912
	ldr r1, _080C694C  @ =0x00000A3C
	add r1, r1, r8
	mov r0, #8
	strh r0, [r1]
_080C6912:
	mov r3, r8
	ldr r1, _080C6950  @ =0x00000E85
	add r0, r3, r1
	add r0, r7, r0
	ldrb r5, [r0]
	cmp r5, #0
	beq _080C6980
	ldr r4, _080C6954  @ =0x00001002
	add r2, r3, r4
	add r2, r7, r2
	lsl r1, r7, #1
	ldr r4, _080C6958  @ =0x00001192
	add r0, r3, r4
	add r1, r1, r0
	ldrh r0, [r1]
	strb r0, [r2]
	mov r0, #255
	strh r0, [r1]
	cmp r5, #2
	beq _080C696C
	cmp r5, #2
	bgt _080C695C
	cmp r5, #1
	beq _080C6962
	b _080C696C
_080C6944:
	.4byte 0x00000FF2
_080C6948:
	.4byte 0x0000165E
_080C694C:
	.4byte 0x00000A3C
_080C6950:
	.4byte 0x00000E85
_080C6954:
	.4byte 0x00001002
_080C6958:
	.4byte 0x00001192
_080C695C:
	cmp r5, #3
	beq _080C6976
	b _080C696C
_080C6962:
	add r0, r7, #0
	mov r1, #228
	bl sub_080C66A4
	b _080C6A18
_080C696C:
	add r0, r7, #0
	mov r1, #229
	bl sub_080C66A4
	b _080C6A18
_080C6976:
	add r0, r7, #0
	mov r1, #217
	bl sub_080C66A4
	b _080C6A18
_080C6980:
	ldr r1, _080C69C8  @ =0x000011B2
	add r0, r3, r1
	add r0, r7, r0
	ldrb r0, [r0]
	mov r6, #15
	and r6, r6, r0
	cmp r6, #0
	beq _080C69D4
	sub r0, r6, #1
	lsl r0, r0, #24
	lsr r6, r0, #24
	ldr r4, _080C69CC  @ =0x00000ECB
	add r2, r3, r4
	ldrb r4, [r2]
	cmp r4, #0
	beq _080C69E4
	ldr r0, _080C69D0  @ =0x00000ECC
	add r1, r3, r0
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #9
	bls _080C69B4
	strb r5, [r2]
_080C69B4:
	ldrb r0, [r2]
	cmp r0, #1
	bne _080C69D4
	add r0, r7, #0
	add r1, r6, #0
	mov r2, #0
	bl sub_080C6F08
	b _080C6A18
	.byte 0x00
	.byte 0x00
_080C69C8:
	.4byte 0x000011B2
_080C69CC:
	.4byte 0x00000ECB
_080C69D0:
	.4byte 0x00000ECC
_080C69D4:
	ldr r0, _080C69E0  @ =0x00000FA2
	add r0, r0, r8
	add r0, r7, r0
	mov r1, #0
	strb r1, [r0]
	b _080C69FE
_080C69E0:
	.4byte 0x00000FA2
_080C69E4:
	add r5, r6, #0
	bl GetRandomInt
	ldr r1, _080C6A08  @ =gUnknown_0817216F
	add r1, r5, r1
	ldrb r1, [r1]
	and r1, r1, r0
	cmp r1, #0
	beq _080C6A10
	ldr r0, _080C6A0C  @ =0x00000FA2
	add r0, r0, r8
	add r0, r7, r0
	strb r4, [r0]
_080C69FE:
	add r0, r7, #0
	bl sub_080C67A4
	b _080C6A18
	.byte 0x00
	.byte 0x00
_080C6A08:
	.4byte gUnknown_0817216F
_080C6A0C:
	.4byte 0x00000FA2
_080C6A10:
	add r0, r7, #0
	add r1, r5, #0
	bl sub_080C6E84
_080C6A18:
	pop {r3}
	mov r8, r3
	pop {r4-r7}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_080C6818

	.byte 0x00
	.byte 0x00
