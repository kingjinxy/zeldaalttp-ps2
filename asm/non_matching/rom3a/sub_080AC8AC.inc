	THUMB_FUNC_START sub_080AC8AC
sub_080AC8AC: @ 0x080AC8AC
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	sub sp, sp, #4
	lsl r0, r0, #24
	lsr r0, r0, #24
	lsl r1, r1, #24
	lsr r1, r1, #24
	mov r2, #0
	mov r9, r2
	mov r10, r2
	mov r2, sp
	bl sub_080AB89C
	lsl r0, r0, #24
	cmp r0, #0
	beq _080AC8D4
	b _080ACF72
_080AC8D4:
	ldr r1, _080AC904  @ =gRam
	ldr r5, _080AC908  @ =0x00001776
	add r0, r1, r5
	ldrb r0, [r0]
	cmp r0, #1
	bne _080AC8F0
	ldr r6, _080AC90C  @ =0x00001732
	add r0, r1, r6
	ldrb r0, [r0]
	mov r9, r0
	ldr r2, _080AC910  @ =0x00001733
	add r0, r1, r2
	ldrb r0, [r0]
	mov r10, r0
_080AC8F0:
	ldr r5, _080AC914  @ =0x0000175D
	add r0, r1, r5
	ldrb r0, [r0]
	cmp r0, #32
	bne _080AC91C
	ldr r6, _080AC918  @ =0x00001770
	add r1, r1, r6
	mov r0, #2
	b _080AC922
	.byte 0x00
	.byte 0x00
_080AC904:
	.4byte gRam
_080AC908:
	.4byte 0x00001776
_080AC90C:
	.4byte 0x00001732
_080AC910:
	.4byte 0x00001733
_080AC914:
	.4byte 0x0000175D
_080AC918:
	.4byte 0x00001770
_080AC91C:
	ldr r0, _080AC99C  @ =0x00001770
	add r1, r1, r0
	mov r0, #1
_080AC922:
	strb r0, [r1]
	ldr r3, _080AC9A0  @ =gRam
	ldr r1, _080AC9A4  @ =0x0000175D
	add r0, r3, r1
	ldrb r7, [r0]
	add r0, r7, #0
	sub r0, r0, #76
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #3
	bls _080AC96A
	ldr r2, _080AC9A8  @ =gUnknown_0816E4A4
	cmp r7, #0
	bne _080AC946
	ldr r0, _080AC9AC  @ =gUnknown_0816E344
	ldr r1, [r0, #16]
	ldrb r0, [r2]
	strb r0, [r1]
_080AC946:
	add r0, r7, r2
	ldrb r2, [r0]
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	cmp r0, #0
	blt _080AC95E
	ldr r0, _080AC9AC  @ =gUnknown_0816E344
	lsl r1, r7, #2
	add r1, r1, r0
	ldr r0, [r1]
	strb r2, [r0]
_080AC95E:
	cmp r7, #31
	bne _080AC96A
	ldr r2, _080AC9B0  @ =0x00001711
	add r1, r3, r2
	mov r0, #0
	strb r0, [r1]
_080AC96A:
	cmp r7, #18
	beq _080AC996
	cmp r7, #21
	beq _080AC996
	cmp r7, #24
	beq _080AC996
	cmp r7, #25
	beq _080AC996
	cmp r7, #83
	beq _080AC996
	cmp r7, #84
	beq _080AC996
	cmp r7, #85
	beq _080AC996
	cmp r7, #86
	beq _080AC996
	cmp r7, #87
	beq _080AC996
	cmp r7, #7
	beq _080AC996
	cmp r7, #8
	bne _080AC9B4
_080AC996:
	bl sub_080AA794
	b _080AC9D0
_080AC99C:
	.4byte 0x00001770
_080AC9A0:
	.4byte gRam
_080AC9A4:
	.4byte 0x0000175D
_080AC9A8:
	.4byte gUnknown_0816E4A4
_080AC9AC:
	.4byte gUnknown_0816E344
_080AC9B0:
	.4byte 0x00001711
_080AC9B4:
	cmp r7, #11
	bne _080AC9C4
	ldr r1, _080AC9C0  @ =gArrowFiller
	mov r0, #10
	strb r0, [r1]
	b _080AC9D0
_080AC9C0:
	.4byte gArrowFiller
_080AC9C4:
	cmp r7, #1
	bne _080AC9D0
	bl sub_080AA794
	bl sub_080AA748
_080AC9D0:
	mov r4, #4
	cmp r7, #75
	beq _080AC9DC
	cmp r7, #30
	bne _080AC9E4
	mov r4, #2
_080AC9DC:
	ldr r1, _080AC9F4  @ =gAbilityFlags
	ldrb r0, [r1]
	orr r4, r4, r0
	strb r4, [r1]
_080AC9E4:
	cmp r7, #27
	beq _080AC9EC
	cmp r7, #28
	bne _080AC9F8
_080AC9EC:
	bl sub_081332B0
	b _080ACC04
	.byte 0x00
	.byte 0x00
_080AC9F4:
	.4byte gAbilityFlags
_080AC9F8:
	mov r4, #4
	cmp r7, #55
	beq _080ACA0A
	mov r4, #1
	cmp r7, #56
	beq _080ACA0A
	mov r4, #2
	cmp r7, #57
	bne _080ACA36
_080ACA0A:
	ldr r1, _080ACA50  @ =gUnknown_0816E344
	lsl r0, r7, #2
	add r0, r0, r1
	ldr r1, [r0]
	ldrb r0, [r1]
	orr r4, r4, r0
	strb r4, [r1]
	ldr r2, _080ACA54  @ =gRam
	ldr r5, _080ACA58  @ =0x00000A4C
	add r1, r2, r5
	ldrh r0, [r1]
	add r0, r0, #1
	strh r0, [r1]
	mov r1, #7
	and r0, r0, r1
	cmp r0, #7
	bne _080ACA36
	mov r6, #179
	lsl r6, r6, #5
	add r1, r2, r6
	mov r0, #4
	strb r0, [r1]
_080ACA36:
	cmp r7, #34
	bne _080ACA5C
	ldr r0, _080ACA50  @ =gUnknown_0816E344
	add r0, r0, #136
	ldr r1, [r0]
	ldrb r0, [r1]
	cmp r0, #0
	beq _080ACA48
	b _080ACC04
_080ACA48:
	mov r0, #1
	strb r0, [r1]
	b _080ACC04
	.byte 0x00
	.byte 0x00
_080ACA50:
	.4byte gUnknown_0816E344
_080ACA54:
	.4byte gRam
_080ACA58:
	.4byte 0x00000A4C
_080ACA5C:
	cmp r7, #37
	beq _080ACA68
	cmp r7, #50
	beq _080ACA68
	cmp r7, #51
	bne _080ACAB0
_080ACA68:
	ldr r0, _080ACAA0  @ =gUnknown_0816E344
	lsl r3, r7, #2
	add r3, r3, r0
	ldr r4, [r3]
	ldr r5, _080ACAA4  @ =gUnknown_0816E4FC
	ldr r2, _080ACAA8  @ =gRam
	ldr r0, _080ACAAC  @ =0x00000AB2
	add r2, r2, r0
	ldrh r0, [r2]
	lsr r0, r0, #1
	lsl r0, r0, #1
	add r0, r0, r5
	ldrb r1, [r0]
	ldrb r0, [r4]
	orr r0, r0, r1
	strb r0, [r4]
	ldr r3, [r3]
	ldrh r0, [r2]
	lsr r0, r0, #1
	lsl r0, r0, #1
	add r0, r0, r5
	ldrh r0, [r0]
	lsr r0, r0, #8
	ldrb r1, [r3, #1]
	orr r0, r0, r1
	strb r0, [r3, #1]
	b _080ACC04
	.byte 0x00
	.byte 0x00
_080ACAA0:
	.4byte gUnknown_0816E344
_080ACAA4:
	.4byte gUnknown_0816E4FC
_080ACAA8:
	.4byte gRam
_080ACAAC:
	.4byte 0x00000AB2
_080ACAB0:
	cmp r7, #62
	bne _080ACAD4
	mov r0, #72
	mov r1, #0
	bl sub_0812A324
	ldr r2, _080ACB54  @ =gRam
	ldr r1, _080ACB58  @ =0x00001791
	add r0, r2, r1
	ldrb r1, [r0]
	mov r0, #128
	and r0, r0, r1
	cmp r0, #0
	beq _080ACAD4
	ldr r5, _080ACB5C  @ =0x00001792
	add r1, r2, r5
	mov r0, #2
	strb r0, [r1]
_080ACAD4:
	cmp r7, #32
	bne _080ACB74
	ldr r2, _080ACB54  @ =gRam
	ldr r6, _080ACB60  @ =0x00000A4C
	add r1, r2, r6
	ldrh r0, [r1]
	add r0, r0, #1
	strh r0, [r1]
	mov r0, sp
	ldrb r0, [r0]
	mov r12, r0
	mov r1, sp
	mov r0, #4
	strb r0, [r1]
	mov r8, r2
	ldr r6, _080ACB64  @ =0x00000E15
	add r6, r6, r8
	mov r2, #0
	ldr r4, _080ACB58  @ =0x00001791
	add r4, r4, r8
	ldr r3, _080ACB5C  @ =0x00001792
	add r3, r3, r8
_080ACB00:
	ldrb r0, [r1]
	add r0, r0, r6
	ldrb r5, [r0]
	cmp r5, #7
	beq _080ACB0E
	cmp r5, #44
	bne _080ACB14
_080ACB0E:
	strb r2, [r0]
	strb r2, [r4]
	strb r2, [r3]
_080ACB14:
	ldrb r0, [r1]
	sub r0, r0, #1
	strb r0, [r1]
	lsl r0, r0, #24
	cmp r0, #0
	bge _080ACB00
	mov r0, sp
	mov r1, r12
	strb r1, [r0]
	ldr r3, _080ACB54  @ =gRam
	ldr r2, _080ACB68  @ =0x00001710
	add r4, r3, r2
	ldrb r0, [r4]
	cmp r0, #0
	beq _080ACB74
	ldr r5, _080ACB6C  @ =0x0000176E
	add r1, r3, r5
	mov r2, #0
	mov r0, #32
	strb r0, [r1]
	ldr r6, _080ACB70  @ =0x0000180D
	add r0, r3, r6
	strb r2, [r0]
	strb r2, [r4]
	mov r0, #4
	mov r1, #35
	bl sub_081167A0
	mov r0, #21
	bl sub_0809E43C
	b _080ACC04
_080ACB54:
	.4byte gRam
_080ACB58:
	.4byte 0x00001791
_080ACB5C:
	.4byte 0x00001792
_080ACB60:
	.4byte 0x00000A4C
_080ACB64:
	.4byte 0x00000E15
_080ACB68:
	.4byte 0x00001710
_080ACB6C:
	.4byte 0x0000176E
_080ACB70:
	.4byte 0x0000180D
_080ACB74:
	cmp r7, #41
	bne _080ACB94
	ldr r0, _080ACB8C  @ =gMagicPowder
	ldrb r0, [r0]
	cmp r0, #2
	beq _080ACB94
	ldr r0, _080ACB90  @ =gUnknown_0816E344
	add r0, r0, #164
	ldr r1, [r0]
	mov r0, #1
	b _080ACBCE
	.byte 0x00
	.byte 0x00
_080ACB8C:
	.4byte gMagicPowder
_080ACB90:
	.4byte gUnknown_0816E344
_080ACB94:
	mov r4, #1
	cmp r7, #36
	beq _080ACBB6
	ldr r0, _080ACBD8  @ =gRam
	ldr r1, _080ACBDC  @ =0x00001776
	add r0, r0, r1
	ldrb r0, [r0]
	cmp r0, #2
	beq _080ACBE4
	cmp r7, #39
	beq _080ACBB6
	mov r4, #3
	cmp r7, #40
	beq _080ACBB6
	cmp r7, #49
	bne _080ACBE4
	mov r4, #10
_080ACBB6:
	ldr r0, _080ACBE0  @ =gUnknown_0816E344
	lsl r1, r7, #2
	add r1, r1, r0
	ldr r2, [r1]
	ldrb r0, [r2]
	add r0, r4, r0
	strb r0, [r2]
	ldr r1, [r1]
	ldrb r0, [r1]
	cmp r0, #98
	bls _080ACBD0
	mov r0, #99
_080ACBCE:
	strb r0, [r1]
_080ACBD0:
	bl sub_080AA724
	b _080ACC04
	.byte 0x00
	.byte 0x00
_080ACBD8:
	.4byte gRam
_080ACBDC:
	.4byte 0x00001776
_080ACBE0:
	.4byte gUnknown_0816E344
_080ACBE4:
	cmp r7, #23
	bne _080ACBFE
	ldr r0, _080ACC24  @ =gUnknown_0816E344
	ldr r2, [r0, #92]
	ldrb r0, [r2]
	add r0, r0, #1
	mov r1, #3
	and r0, r0, r1
	strb r0, [r2]
	mov r0, #71
	mov r1, #0
	bl sub_0812A324
_080ACBFE:
	add r0, r7, #0
	bl sub_080ACFA8
_080ACC04:
	ldr r1, _080ACC28  @ =gRam
	ldr r2, _080ACC2C  @ =0x0000175D
	add r0, r1, r2
	ldrb r7, [r0]
	ldr r0, _080ACC30  @ =gUnknown_0816E23C
	add r0, r7, r0
	ldrb r0, [r0]
	ldr r5, _080ACC34  @ =0x00001732
	add r1, r1, r5
	strb r0, [r1]
	ldrb r4, [r1]
	cmp r4, #255
	bne _080ACC38
	mov r4, #0
	b _080ACC4C
	.byte 0x00
	.byte 0x00
_080ACC24:
	.4byte gUnknown_0816E344
_080ACC28:
	.4byte gRam
_080ACC2C:
	.4byte 0x0000175D
_080ACC30:
	.4byte gUnknown_0816E23C
_080ACC34:
	.4byte 0x00001732
_080ACC38:
	cmp r4, #32
	beq _080ACC44
	cmp r4, #45
	beq _080ACC44
	cmp r4, #46
	bne _080ACC4C
_080ACC44:
	bl sub_0812FC84
	bl sub_08133148
_080ACC4C:
	add r0, r4, #0
	bl sub_0812FBC4
	ldr r1, _080ACD34  @ =gRam
	ldr r6, _080ACD38  @ =0x00001732
	add r0, r1, r6
	ldrb r0, [r0]
	cmp r0, #6
	beq _080ACC62
	cmp r0, #24
	bne _080ACC74
_080ACC62:
	ldr r2, _080ACD3C  @ =0x0000175D
	add r0, r1, r2
	ldrb r0, [r0]
	cmp r0, #0
	beq _080ACC74
	bl sub_0812F250
	bl sub_081330EC
_080ACC74:
	ldr r3, _080ACD34  @ =gRam
	mov r1, sp
	ldr r5, _080ACD40  @ =0x00000E29
	add r0, r3, r5
	ldrb r1, [r1]
	add r0, r0, r1
	ldr r6, _080ACD3C  @ =0x0000175D
	add r2, r3, r6
	ldrb r1, [r2]
	mov r5, #0
	strb r1, [r0]
	ldrb r7, [r2]
	mov r1, sp
	ldr r2, _080ACD44  @ =0x00001837
	add r0, r3, r2
	ldrb r1, [r1]
	add r0, r0, r1
	strb r5, [r0]
	mov r4, #9
	mov r8, r3
	cmp r7, #1
	bne _080ACCDC
	mov r1, sp
	ldr r0, _080ACD48  @ =0x00001832
	add r0, r0, r8
	ldrb r1, [r1]
	add r0, r0, r1
	strb r4, [r0]
	ldr r0, _080ACD4C  @ =0x00001776
	add r0, r0, r8
	ldrb r0, [r0]
	cmp r0, #2
	beq _080ACCE8
	mov r1, sp
	ldr r0, _080ACD50  @ =0x00000E33
	add r0, r0, r8
	ldrb r1, [r1]
	add r0, r0, r1
	mov r1, #160
	strb r1, [r0]
	ldr r1, _080ACD54  @ =0x000009AD
	add r1, r1, r8
	mov r0, #43
	strb r0, [r1]
	ldr r0, _080ACD58  @ =0x00000CF8
	add r0, r0, r8
	strh r5, [r0]
	mov r0, #4
	mov r1, #53
	bl sub_080AD164
	mov r4, #2
_080ACCDC:
	mov r1, sp
	ldr r0, _080ACD48  @ =0x00001832
	add r0, r0, r8
	ldrb r1, [r1]
	add r0, r0, r1
	strb r4, [r0]
_080ACCE8:
	mov r1, sp
	ldr r0, _080ACD5C  @ =0x00000DBB
	add r0, r0, r8
	ldrb r1, [r1]
	add r0, r0, r1
	mov r1, #5
	strb r1, [r0]
	add r5, r7, #0
	mov r7, #96
	mov r1, sp
	ldr r0, _080ACD60  @ =0x00000E1F
	add r0, r0, r8
	ldrb r1, [r1]
	add r0, r0, r1
	ldr r2, _080ACD4C  @ =0x00001776
	add r2, r2, r8
	ldrb r1, [r2]
	strb r1, [r0]
	ldrb r0, [r2]
	cmp r0, #0
	beq _080ACD14
	mov r7, #56
_080ACD14:
	mov r1, sp
	ldr r0, _080ACD40  @ =0x00000E29
	add r0, r0, r8
	ldrb r1, [r1]
	add r0, r0, r1
	ldrb r4, [r0]
	cmp r4, #32
	beq _080ACD30
	cmp r4, #55
	beq _080ACD30
	cmp r4, #56
	beq _080ACD30
	cmp r4, #57
	bne _080ACD64
_080ACD30:
	mov r7, #104
	b _080ACD6A
_080ACD34:
	.4byte gRam
_080ACD38:
	.4byte 0x00001732
_080ACD3C:
	.4byte 0x0000175D
_080ACD40:
	.4byte 0x00000E29
_080ACD44:
	.4byte 0x00001837
_080ACD48:
	.4byte 0x00001832
_080ACD4C:
	.4byte 0x00001776
_080ACD50:
	.4byte 0x00000E33
_080ACD54:
	.4byte 0x000009AD
_080ACD58:
	.4byte 0x00000CF8
_080ACD5C:
	.4byte 0x00000DBB
_080ACD60:
	.4byte 0x00000E1F
_080ACD64:
	cmp r4, #38
	bne _080ACD6A
	mov r7, #2
_080ACD6A:
	mov r1, sp
	ldr r0, _080ACDF0  @ =0x00001844
	add r0, r0, r8
	ldrb r1, [r1]
	add r0, r0, r1
	strb r7, [r0]
	add r7, r5, #0
	ldr r0, _080ACDF4  @ =0x00001776
	add r0, r0, r8
	ldrb r0, [r0]
	cmp r0, #1
	bne _080ACE14
	ldr r4, _080ACDF8  @ =0x00001733
	add r4, r4, r8
	mov r5, r10
	strb r5, [r4]
	ldr r3, _080ACDFC  @ =0x00001732
	add r3, r3, r8
	mov r6, r9
	strb r6, [r3]
	ldrb r2, [r3]
	ldrb r0, [r4]
	lsl r0, r0, #8
	add r2, r2, r0
	mov r0, #252
	lsl r0, r0, #5
	and r2, r2, r0
	asr r2, r2, #4
	ldr r0, _080ACE00  @ =0x00000BAA
	add r0, r0, r8
	ldrh r1, [r0]
	mov r5, #255
	lsl r5, r5, #8
	add r0, r5, #0
	and r0, r0, r1
	add r2, r2, r0
	mov r6, #150
	lsl r6, r6, #4
	add r6, r6, r8
	strh r2, [r6]
	ldrb r1, [r3]
	ldrb r0, [r4]
	lsl r0, r0, #8
	add r1, r1, r0
	mov r0, #126
	and r1, r1, r0
	lsl r1, r1, #2
	ldr r0, _080ACE04  @ =0x00000BA8
	add r0, r0, r8
	ldrh r3, [r0]
	add r0, r5, #0
	and r0, r0, r3
	add r1, r1, r0
	ldr r0, _080ACE08  @ =0x00000964
	add r0, r0, r8
	strh r1, [r0]
	ldr r0, _080ACE0C  @ =gUnknown_0816E18C
	add r0, r7, r0
	ldrb r0, [r0]
	orr r0, r0, r5
	add r2, r2, r0
	strh r2, [r6]
	ldr r0, _080ACE10  @ =gUnknown_0816E1E4
	add r0, r7, r0
	ldrb r0, [r0]
	b _080ACF5E
	.byte 0x00
	.byte 0x00
_080ACDF0:
	.4byte 0x00001844
_080ACDF4:
	.4byte 0x00001776
_080ACDF8:
	.4byte 0x00001733
_080ACDFC:
	.4byte 0x00001732
_080ACE00:
	.4byte 0x00000BAA
_080ACE04:
	.4byte 0x00000BA8
_080ACE08:
	.4byte 0x00000964
_080ACE0C:
	.4byte gUnknown_0816E18C
_080ACE10:
	.4byte gUnknown_0816E1E4
_080ACE14:
	mov r0, sp
	ldrb r1, [r0]
	ldr r0, _080ACE3C  @ =0x00000E1F
	add r0, r0, r8
	add r0, r1, r0
	ldrb r0, [r0]
	cmp r0, #0
	bne _080ACE44
	ldr r0, _080ACE40  @ =0x00000E29
	add r0, r0, r8
	add r0, r1, r0
	ldrb r0, [r0]
	cmp r0, #1
	bne _080ACE44
	add r0, r1, #0
	mov r1, #15
	bl sub_080C19F8
	b _080ACE88
	.byte 0x00
	.byte 0x00
_080ACE3C:
	.4byte 0x00000E1F
_080ACE40:
	.4byte 0x00000E29
_080ACE44:
	mov r0, sp
	ldrb r1, [r0]
	ldr r0, _080ACE74  @ =0x00000E29
	add r0, r0, r8
	add r0, r1, r0
	ldrb r4, [r0]
	cmp r4, #62
	beq _080ACE88
	cmp r4, #23
	beq _080ACE88
	cmp r4, #32
	beq _080ACE68
	cmp r4, #55
	beq _080ACE68
	cmp r4, #56
	beq _080ACE68
	cmp r4, #57
	bne _080ACE80
_080ACE68:
	ldr r0, _080ACE78  @ =gRam
	ldr r1, _080ACE7C  @ =0x00000A3C
	add r0, r0, r1
	mov r1, #23
	strh r1, [r0]
	b _080ACE88
_080ACE74:
	.4byte 0x00000E29
_080ACE78:
	.4byte gRam
_080ACE7C:
	.4byte 0x00000A3C
_080ACE80:
	add r0, r1, #0
	mov r1, #122
	bl sub_080C19F8
_080ACE88:
	ldr r2, _080ACEBC  @ =gRam
	ldr r6, _080ACEC0  @ =0x00000964
	add r3, r2, r6
	mov r4, #0
	mov r0, #10
	strb r0, [r3]
	ldr r1, _080ACEC4  @ =0x00000965
	add r0, r2, r1
	strb r4, [r0]
	mov r1, sp
	ldr r6, _080ACEC8  @ =0x00000E29
	add r0, r2, r6
	ldrb r1, [r1]
	add r0, r0, r1
	ldrb r7, [r0]
	ldr r0, _080ACECC  @ =gUnknown_0816E294
	add r0, r7, r0
	ldrb r0, [r0]
	mov r8, r2
	cmp r0, #0
	beq _080ACED4
	cmp r7, #32
	bne _080ACED0
	strb r4, [r3]
	b _080ACED4
	.byte 0x00
	.byte 0x00
_080ACEBC:
	.4byte gRam
_080ACEC0:
	.4byte 0x00000964
_080ACEC4:
	.4byte 0x00000965
_080ACEC8:
	.4byte 0x00000E29
_080ACECC:
	.4byte gUnknown_0816E294
_080ACED0:
	mov r0, #6
	strb r0, [r3]
_080ACED4:
	ldr r0, _080ACF84  @ =0x00001776
	add r0, r0, r8
	ldrb r7, [r0]
	cmp r7, #3
	bne _080ACEE0
	mov r7, #0
_080ACEE0:
	mov r4, #151
	lsl r4, r4, #4
	add r4, r4, r8
	mov r1, #0
	strb r1, [r4]
	ldr r2, _080ACF88  @ =0x00000971
	add r2, r2, r8
	strb r1, [r2]
	cmp r7, #2
	bne _080ACEFC
	mov r0, #248
	strb r0, [r4]
	sub r0, r0, #249
	strb r0, [r2]
_080ACEFC:
	ldr r3, _080ACF8C  @ =0x00000968
	add r3, r3, r8
	strb r7, [r3]
	ldr r0, _080ACF90  @ =0x00000969
	add r0, r0, r8
	strb r1, [r0]
	add r7, r5, #0
	mov r2, #150
	lsl r2, r2, #4
	add r2, r2, r8
	ldr r0, _080ACF94  @ =0x0000FFF2
	strh r0, [r2]
	mov r1, #0
	ldrsh r0, [r3, r1]
	cmp r0, #0
	beq _080ACF2C
	ldr r0, _080ACF98  @ =gUnknown_0816E18C
	add r0, r7, r0
	ldrb r0, [r0]
	mov r5, #255
	lsl r5, r5, #8
	add r1, r5, #0
	orr r0, r0, r1
	strh r0, [r2]
_080ACF2C:
	mov r0, #182
	lsl r0, r0, #5
	add r0, r0, r8
	ldrh r1, [r4]
	ldrh r0, [r0]
	add r1, r1, r0
	ldrh r0, [r2]
	add r0, r0, r1
	strh r0, [r2]
	mov r6, #0
	ldrsh r0, [r3, r6]
	cmp r0, #0
	beq _080ACF52
	ldr r0, _080ACF9C  @ =gUnknown_0816E1E4
	add r0, r7, r0
	ldrb r1, [r0]
	ldr r0, _080ACFA0  @ =0x00000964
	add r0, r0, r8
	strh r1, [r0]
_080ACF52:
	ldr r1, _080ACFA0  @ =0x00000964
	add r1, r1, r8
	ldr r0, _080ACFA4  @ =0x000016C4
	add r0, r0, r8
	ldrh r0, [r0]
	ldrh r1, [r1]
_080ACF5E:
	add r0, r0, r1
	lsl r0, r0, #16
	lsr r1, r0, #16
	ldr r0, _080ACFA0  @ =0x00000964
	add r0, r0, r8
	strh r1, [r0]
	mov r0, sp
	ldrb r0, [r0]
	bl sub_080ABA78
_080ACF72:
	add sp, sp, #4
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080ACF84:
	.4byte 0x00001776
_080ACF88:
	.4byte 0x00000971
_080ACF8C:
	.4byte 0x00000968
_080ACF90:
	.4byte 0x00000969
_080ACF94:
	.4byte 0x0000FFF2
_080ACF98:
	.4byte gUnknown_0816E18C
_080ACF9C:
	.4byte gUnknown_0816E1E4
_080ACFA0:
	.4byte 0x00000964
_080ACFA4:
	.4byte 0x000016C4
	THUMB_FUNC_END sub_080AC8AC

