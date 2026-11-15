	THUMB_FUNC_START sub_080ABCFC
sub_080ABCFC: @ 0x080ABCFC
	push {r4-r7,lr}
	mov r7, r9
	mov r6, r8
	push {r6,r7}
	sub sp, sp, #4
	lsl r0, r0, #24
	lsr r0, r0, #24
	lsl r1, r1, #24
	lsr r4, r1, #24
	add r1, r4, #0
	mov r2, sp
	bl sub_080AB89C
	lsl r0, r0, #24
	asr r5, r0, #24
	cmp r5, #0
	beq _080ABD20
	b _080AC0F0
_080ABD20:
	ldr r3, _080ABE98  @ =gRam
	mov r1, sp
	ldr r2, _080ABE9C  @ =0x00001844
	add r0, r3, r2
	ldrb r1, [r1]
	add r0, r0, r1
	strb r5, [r0]
	mov r1, sp
	ldr r7, _080ABEA0  @ =0x00000E29
	add r0, r3, r7
	ldrb r1, [r1]
	add r0, r0, r1
	strb r5, [r0]
	mov r1, sp
	sub r2, r2, #49
	add r0, r3, r2
	ldrb r1, [r1]
	add r0, r0, r1
	strb r5, [r0]
	mov r1, sp
	ldr r7, _080ABEA4  @ =0x00000A92
	add r0, r3, r7
	ldrb r1, [r1]
	add r0, r0, r1
	strb r5, [r0]
	mov r1, sp
	add r2, r2, #5
	add r0, r3, r2
	ldrb r1, [r1]
	add r0, r0, r1
	strb r4, [r0]
	ldr r4, _080ABEA8  @ =0x000017F0
	add r1, r3, r4
	mov r0, #1
	strb r0, [r1]
	mov r0, sp
	ldrb r1, [r0]
	ldr r7, _080ABEAC  @ =0x00001827
	add r7, r7, r3
	mov r12, r7
	add r1, r1, r12
	ldr r2, _080ABEB0  @ =gBoomerang
	ldrb r0, [r2]
	sub r0, r0, #1
	strb r0, [r1]
	ldrb r0, [r2]
	sub r0, r0, #1
	lsl r0, r0, #24
	lsr r4, r0, #24
	mov r0, sp
	ldr r2, _080ABEB4  @ =0x00000E1F
	add r1, r3, r2
	ldrb r0, [r0]
	add r1, r1, r0
	ldr r0, _080ABEB8  @ =gUnknown_0816E0B8
	add r0, r4, r0
	ldrb r0, [r0]
	strb r0, [r1]
	mov r0, sp
	ldr r7, _080ABEBC  @ =0x00001832
	add r1, r3, r7
	ldrb r0, [r0]
	add r1, r1, r0
	ldr r0, _080ABEC0  @ =gUnknown_0816E0BA
	add r0, r4, r0
	ldrb r0, [r0]
	strb r0, [r1]
	mov r4, #0
	ldr r0, _080ABEC4  @ =0x00000545
	add r0, r0, r3
	mov r9, r0
	ldrb r2, [r0]
	mov r1, #12
	mov r8, r1
	mov r0, r8
	and r0, r0, r2
	cmp r0, #0
	beq _080ABDC6
	mov r1, #3
	and r1, r1, r2
	neg r0, r1
	orr r0, r0, r1
	lsr r4, r0, #31
_080ABDC6:
	mov r2, #150
	lsl r2, r2, #4
	add r6, r3, r2
	strb r4, [r6]
	mov r0, sp
	ldrb r0, [r0]
	add r0, r0, r12
	ldrb r0, [r0]
	lsl r0, r0, #1
	add r0, r4, r0
	lsl r0, r0, #24
	lsr r4, r0, #24
	ldr r0, _080ABEC8  @ =gUnknown_0816E0B4
	add r0, r4, r0
	ldrb r2, [r0]
	strb r2, [r6]
	mov r1, sp
	ldr r7, _080ABECC  @ =0x0000185B
	add r0, r3, r7
	ldrb r1, [r1]
	add r0, r0, r1
	strb r2, [r0]
	ldr r1, _080ABED0  @ =0x00001732
	add r0, r3, r1
	strb r4, [r0]
	mov r2, r9
	ldrb r0, [r2]
	mov r1, #15
	and r1, r1, r0
	cmp r1, #0
	bne _080ABE12
	ldr r1, _080ABED4  @ =gUnknown_0816E0BC
	ldr r4, _080ABED8  @ =0x000016D5
	add r0, r3, r4
	ldrb r0, [r0]
	lsr r0, r0, #1
	add r0, r0, r1
	ldrb r1, [r0]
_080ABE12:
	ldr r7, _080ABEDC  @ =0x00000961
	add r0, r3, r7
	strb r1, [r0]
	ldr r0, _080ABEE0  @ =0x00001830
	add r7, r3, r0
	strb r5, [r7]
	ldrb r4, [r6]
	add r0, r1, #0
	mov r2, r8
	and r0, r0, r2
	cmp r0, #0
	beq _080ABE62
	mov r0, #8
	and r1, r1, r0
	cmp r1, #0
	beq _080ABE38
	neg r0, r4
	lsl r0, r0, #24
	lsr r4, r0, #24
_080ABE38:
	mov r0, sp
	ldrb r0, [r0]
	ldr r2, _080ABEE4  @ =0x00000DED
	add r1, r3, r2
	add r0, r0, r1
	strb r4, [r0]
	mov r0, sp
	ldrb r2, [r0]
	add r1, r2, r1
	mov r0, #0
	ldrsb r0, [r1, r0]
	mvn r0, r0
	lsr r4, r0, #31
	ldr r1, _080ABEE8  @ =0x00000E3D
	add r0, r3, r1
	add r2, r2, r0
	strb r4, [r2]
	ldr r0, _080ABED4  @ =gUnknown_0816E0BC
	add r0, r4, r0
	ldrb r0, [r0]
	strb r0, [r7]
_080ABE62:
	mov r0, sp
	ldrb r0, [r0]
	ldr r4, _080ABEEC  @ =0x0000183C
	add r2, r3, r4
	add r0, r0, r2
	mov r1, #0
	strb r1, [r0]
	mov r7, #150
	lsl r7, r7, #4
	add r0, r3, r7
	ldrb r4, [r0]
	ldr r1, _080ABEDC  @ =0x00000961
	add r0, r3, r1
	ldrb r1, [r0]
	mov r0, #3
	and r0, r0, r1
	cmp r0, #0
	beq _080ABF32
	mov r0, #2
	and r0, r0, r1
	cmp r0, #0
	beq _080ABEF0
	neg r0, r4
	lsl r0, r0, #24
	lsr r4, r0, #24
	b _080ABEFC
	.byte 0x00
	.byte 0x00
_080ABE98:
	.4byte gRam
_080ABE9C:
	.4byte 0x00001844
_080ABEA0:
	.4byte 0x00000E29
_080ABEA4:
	.4byte 0x00000A92
_080ABEA8:
	.4byte 0x000017F0
_080ABEAC:
	.4byte 0x00001827
_080ABEB0:
	.4byte gBoomerang
_080ABEB4:
	.4byte 0x00000E1F
_080ABEB8:
	.4byte gUnknown_0816E0B8
_080ABEBC:
	.4byte 0x00001832
_080ABEC0:
	.4byte gUnknown_0816E0BA
_080ABEC4:
	.4byte 0x00000545
_080ABEC8:
	.4byte gUnknown_0816E0B4
_080ABECC:
	.4byte 0x0000185B
_080ABED0:
	.4byte 0x00001732
_080ABED4:
	.4byte gUnknown_0816E0BC
_080ABED8:
	.4byte 0x000016D5
_080ABEDC:
	.4byte 0x00000961
_080ABEE0:
	.4byte 0x00001830
_080ABEE4:
	.4byte 0x00000DED
_080ABEE8:
	.4byte 0x00000E3D
_080ABEEC:
	.4byte 0x0000183C
_080ABEF0:
	mov r0, sp
	ldrb r1, [r0]
	add r1, r1, r2
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
_080ABEFC:
	mov r0, sp
	ldrb r0, [r0]
	ldr r2, _080ABF98  @ =0x00000DF7
	add r1, r3, r2
	add r0, r0, r1
	strb r4, [r0]
	mov r4, #2
	mov r0, sp
	ldrb r2, [r0]
	add r1, r2, r1
	mov r0, #0
	ldrsb r0, [r1, r0]
	cmp r0, #0
	blt _080ABF1A
	mov r4, #3
_080ABF1A:
	ldr r7, _080ABF9C  @ =0x00000E3D
	add r0, r3, r7
	add r0, r2, r0
	strb r4, [r0]
	ldr r0, _080ABFA0  @ =gUnknown_0816E0BC
	add r0, r4, r0
	ldr r1, _080ABFA4  @ =0x00001830
	add r2, r3, r1
	ldrb r0, [r0]
	ldrb r1, [r2]
	orr r0, r0, r1
	strb r0, [r2]
_080ABF32:
	mov r4, #7
	ldr r5, _080ABFA8  @ =gUnknown_0816E0C8
	ldr r3, _080ABFAC  @ =gUnknown_0816E0C0
	ldr r2, _080ABFB0  @ =gRam
	ldr r7, _080ABFB4  @ =0x00000961
	add r0, r2, r7
	mov r1, #0
	ldrsb r1, [r0, r1]
_080ABF42:
	add r0, r4, r3
	ldrb r0, [r0]
	cmp r0, r1
	beq _080ABF5A
	sub r0, r4, #1
	lsl r0, r0, #24
	lsr r4, r0, #24
	cmp r0, #0
	bge _080ABF42
	add r0, r4, #1
	lsl r0, r0, #24
	lsr r4, r0, #24
_080ABF5A:
	mov r1, sp
	ldr r3, _080ABFB8  @ =0x00001837
	add r0, r2, r3
	ldrb r1, [r1]
	add r0, r0, r1
	add r1, r4, r5
	ldrb r1, [r1]
	strb r1, [r0]
	lsl r0, r4, #25
	lsr r4, r0, #24
	mov r1, sp
	ldr r7, _080ABFBC  @ =0x00001865
	add r0, r2, r7
	ldrb r1, [r1]
	add r0, r0, r1
	strb r4, [r0]
	ldr r1, _080ABFC0  @ =0x000016EA
	add r0, r2, r1
	ldrb r0, [r0]
	cmp r0, #8
	bls _080ABFC4
	mov r0, sp
	add r3, r3, #13
	add r1, r2, r3
	ldrb r0, [r0]
	add r1, r1, r0
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	b _080ABFE2
	.byte 0x00
	.byte 0x00
_080ABF98:
	.4byte 0x00000DF7
_080ABF9C:
	.4byte 0x00000E3D
_080ABFA0:
	.4byte gUnknown_0816E0BC
_080ABFA4:
	.4byte 0x00001830
_080ABFA8:
	.4byte gUnknown_0816E0C8
_080ABFAC:
	.4byte gUnknown_0816E0C0
_080ABFB0:
	.4byte gRam
_080ABFB4:
	.4byte 0x00000961
_080ABFB8:
	.4byte 0x00001837
_080ABFBC:
	.4byte 0x00001865
_080ABFC0:
	.4byte 0x000016EA
_080ABFC4:
	ldr r7, _080AC030  @ =0x00001732
	add r0, r2, r7
	ldrb r0, [r0]
	cmp r0, #0
	bne _080ABFDC
	ldr r1, _080AC034  @ =0x00000545
	add r0, r2, r1
	ldrb r1, [r0]
	mov r0, #15
	and r0, r0, r1
	cmp r0, #0
	bne _080ABFE2
_080ABFDC:
	ldr r3, _080AC038  @ =0x000016D5
	add r0, r2, r3
	ldrb r4, [r0]
_080ABFE2:
	mov r0, sp
	ldrb r0, [r0]
	bl sub_080ABB30
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #1
	beq _080AC0A0
	ldr r3, _080AC03C  @ =gRam
	mov r0, sp
	ldr r7, _080AC040  @ =0x00001844
	add r1, r3, r7
	ldrb r0, [r0]
	add r1, r1, r0
	ldrb r0, [r1]
	cmp r0, #0
	beq _080AC050
	mov r0, #182
	lsl r0, r0, #5
	add r1, r3, r0
	ldr r0, _080AC044  @ =gUnknown_0816E0F0
	lsr r2, r4, #1
	lsl r2, r2, #1
	add r0, r2, r0
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	add r0, r0, #8
	ldrh r1, [r1]
	add r0, r0, r1
	mov r4, #150
	lsl r4, r4, #4
	add r1, r3, r4
	strh r0, [r1]
	ldr r7, _080AC048  @ =0x000016C4
	add r1, r3, r7
	ldr r0, _080AC04C  @ =gUnknown_0816E100
	b _080AC078
	.byte 0x00
	.byte 0x00
_080AC030:
	.4byte 0x00001732
_080AC034:
	.4byte 0x00000545
_080AC038:
	.4byte 0x000016D5
_080AC03C:
	.4byte gRam
_080AC040:
	.4byte 0x00001844
_080AC044:
	.4byte gUnknown_0816E0F0
_080AC048:
	.4byte 0x000016C4
_080AC04C:
	.4byte gUnknown_0816E100
_080AC050:
	mov r7, #182
	lsl r7, r7, #5
	add r1, r3, r7
	ldr r0, _080AC094  @ =gUnknown_0816E0D0
	lsr r2, r4, #1
	lsl r2, r2, #1
	add r0, r2, r0
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	add r0, r0, #8
	ldrh r1, [r1]
	add r0, r0, r1
	mov r4, #150
	lsl r4, r4, #4
	add r1, r3, r4
	strh r0, [r1]
	add r7, r7, #4
	add r1, r3, r7
	ldr r0, _080AC098  @ =gUnknown_0816E0E0
_080AC078:
	add r2, r2, r0
	mov r0, #0
	ldrsb r0, [r2, r0]
	ldrh r1, [r1]
	add r0, r0, r1
	ldr r2, _080AC09C  @ =0x00000964
	add r1, r3, r2
	strh r0, [r1]
	mov r0, sp
	ldrb r0, [r0]
	bl sub_080ABA78
	b _080AC0F0
	.byte 0x00
	.byte 0x00
_080AC094:
	.4byte gUnknown_0816E0D0
_080AC098:
	.4byte gUnknown_0816E0E0
_080AC09C:
	.4byte 0x00000964
_080AC0A0:
	ldr r1, _080AC0D0  @ =gRam
	mov r2, sp
	ldr r3, _080AC0D4  @ =0x00000E15
	add r0, r1, r3
	ldrb r2, [r2]
	add r0, r0, r2
	mov r2, #0
	strb r2, [r0]
	ldr r4, _080AC0D8  @ =0x000017F0
	add r0, r1, r4
	strb r2, [r0]
	mov r0, sp
	ldrb r2, [r0]
	ldr r7, _080AC0DC  @ =0x0000187A
	add r1, r1, r7
	add r1, r2, r1
	ldrb r0, [r1]
	cmp r0, #240
	beq _080AC0E0
	add r0, r2, #0
	mov r1, #113
	bl sub_080C19F8
	b _080AC0E8
_080AC0D0:
	.4byte gRam
_080AC0D4:
	.4byte 0x00000E15
_080AC0D8:
	.4byte 0x000017F0
_080AC0DC:
	.4byte 0x0000187A
_080AC0E0:
	add r0, r2, #0
	mov r1, #9
	bl sub_080C19F8
_080AC0E8:
	mov r0, sp
	ldrb r0, [r0]
	bl sub_080AC100
_080AC0F0:
	add sp, sp, #4
	pop {r3,r4}
	mov r8, r3
	mov r9, r4
	pop {r4-r7}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_080ABCFC

	.byte 0x00
	.byte 0x00
