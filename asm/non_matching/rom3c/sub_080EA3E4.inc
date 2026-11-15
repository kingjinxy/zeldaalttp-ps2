	THUMB_FUNC_START sub_080EA3E4
sub_080EA3E4: @ 0x080EA3E4
	push {r4-r7,lr}
	sub sp, sp, #4
	lsl r0, r0, #24
	lsr r5, r0, #24
	ldr r1, _080EA450  @ =gRam
	ldr r2, _080EA454  @ =0x00000F22
	add r0, r1, r2
	add r0, r5, r0
	ldrb r0, [r0]
	lsl r4, r0, #24
	add r6, r1, #0
	cmp r4, #0
	beq _080EA416
	ldr r0, _080EA458  @ =0x00001122
	add r2, r6, r0
	add r2, r5, r2
	ldrb r0, [r2]
	mov r1, #191
	and r1, r1, r0
	ldr r3, _080EA45C  @ =gUnknown_08177D30
	lsr r0, r4, #31
	add r0, r0, r3
	ldrb r0, [r0]
	orr r1, r1, r0
	strb r1, [r2]
_080EA416:
	ldr r1, _080EA460  @ =0x00000F92
	add r0, r6, r1
	add r0, r5, r0
	ldrb r7, [r0]
	ldr r2, _080EA464  @ =0x0000164C
	add r0, r6, r2
	ldrb r0, [r0]
	cmp r0, #0
	beq _080EA474
	ldr r1, _080EA468  @ =0x000009AD
	add r0, r6, r1
	ldrb r0, [r0]
	cmp r0, #35
	beq _080EA436
	cmp r0, #44
	bne _080EA49A
_080EA436:
	ldr r2, _080EA46C  @ =0x000009E8
	add r0, r6, r2
	ldrh r0, [r0]
	cmp r0, #0
	beq _080EA49A
	cmp r0, #2
	bhi _080EA49A
	ldr r1, _080EA470  @ =0x00000CF8
	add r0, r6, r1
	ldrh r0, [r0]
	cmp r0, #31
	bhi _080EA49A
	b _080EA4A6
_080EA450:
	.4byte gRam
_080EA454:
	.4byte 0x00000F22
_080EA458:
	.4byte 0x00001122
_080EA45C:
	.4byte gUnknown_08177D30
_080EA460:
	.4byte 0x00000F92
_080EA464:
	.4byte 0x0000164C
_080EA468:
	.4byte 0x000009AD
_080EA46C:
	.4byte 0x000009E8
_080EA470:
	.4byte 0x00000CF8
_080EA474:
	ldr r2, _080EA5B0  @ =0x000009AD
	add r0, r6, r2
	ldrb r0, [r0]
	cmp r0, #35
	beq _080EA482
	cmp r0, #44
	bne _080EA4A6
_080EA482:
	ldr r1, _080EA5B4  @ =0x000009E8
	add r0, r6, r1
	ldrh r0, [r0]
	cmp r0, #0
	beq _080EA4A6
	cmp r0, #2
	bhi _080EA4A6
	ldr r2, _080EA5B8  @ =0x00000CF8
	add r0, r6, r2
	ldrh r0, [r0]
	cmp r0, #31
	bhi _080EA4A6
_080EA49A:
	ldr r0, _080EA5BC  @ =0x00000F92
	add r1, r6, r0
	add r1, r5, r1
	ldrb r0, [r1]
	add r0, r0, #2
	strb r0, [r1]
_080EA4A6:
	add r0, r5, #0
	bl sub_080C6240
	mov r1, #128
	lsl r1, r1, #2
	mov r0, #1
	bl sub_080C6174
	ldr r4, _080EA5C0  @ =gRam
	ldr r1, _080EA5BC  @ =0x00000F92
	add r0, r4, r1
	add r0, r5, r0
	strb r7, [r0]
	ldr r2, _080EA5C4  @ =0x00001082
	add r0, r4, r2
	add r0, r5, r0
	ldrb r0, [r0]
	cmp r0, #0
	beq _080EA4CE
	b _080EA6B0
_080EA4CE:
	add r1, r1, #16
	add r0, r4, r1
	add r0, r5, r0
	ldrb r0, [r0]
	cmp r0, #10
	bne _080EA51A
	ldr r2, _080EA5C8  @ =0x00000F52
	add r0, r4, r2
	add r0, r5, r0
	mov r1, #3
	strb r1, [r0]
	ldr r1, _080EA5B0  @ =0x000009AD
	add r0, r4, r1
	ldrb r0, [r0]
	cmp r0, #0
	bne _080EA51A
	ldr r2, _080EA5CC  @ =0x00001052
	add r1, r4, r2
	add r1, r5, r1
	ldrb r0, [r1]
	sub r0, r0, #1
	strb r0, [r1]
	add r0, r5, #0
	bl sub_080EAB14
	add r0, r5, #0
	bl sub_080EABEC
	ldr r1, _080EA5D0  @ =0x00000996
	add r0, r4, r1
	ldrb r1, [r0]
	mov r0, #15
	and r0, r0, r1
	cmp r0, #0
	bne _080EA51A
	add r0, r5, #0
	bl sub_080EAC54
_080EA51A:
	add r0, r5, #0
	bl Sprite3_CheckIfActive
	lsl r0, r0, #24
	cmp r0, #0
	beq _080EA528
	b _080EA6E8
_080EA528:
	ldr r6, _080EA5C0  @ =gRam
	ldr r2, _080EA5D4  @ =0x0000164C
	add r0, r6, r2
	ldrb r0, [r0]
	cmp r0, #0
	bne _080EA540
	add r0, r5, #0
	bl sub_080C841C
	cmp r0, #0
	beq _080EA540
	b _080EA6E8
_080EA540:
	ldr r1, _080EA5D8  @ =0x00000F82
	add r0, r6, r1
	add r0, r5, r0
	ldrb r7, [r0]
	cmp r7, #0
	bne _080EA60E
	ldr r2, _080EA5DC  @ =0x00001022
	add r0, r6, r2
	add r0, r5, r0
	mov r1, #255
	strb r1, [r0]
	ldr r1, _080EA5E0  @ =0x00000F72
	add r0, r6, r1
	add r4, r5, r0
	ldrb r0, [r4]
	cmp r0, #34
	bls _080EA568
	add r0, r5, #0
	bl sub_080EA9C8
_080EA568:
	ldr r2, _080EA5E4  @ =0x00001072
	add r0, r6, r2
	add r1, r5, r0
	ldrb r0, [r1]
	cmp r0, #0
	beq _080EA590
	strb r7, [r1]
	ldrb r0, [r4]
	cmp r0, #34
	bhi _080EA580
	add r0, r0, #1
	strb r0, [r4]
_080EA580:
	add r0, r5, #0
	bl sub_080EAC54
	ldr r1, _080EA5C8  @ =0x00000F52
	add r0, r6, r1
	add r0, r5, r0
	mov r1, #2
	strb r1, [r0]
_080EA590:
	mov r0, sp
	add r1, r5, #0
	bl sub_080C4948
	ldr r0, _080EA5C0  @ =gRam
	ldr r2, _080EA5C8  @ =0x00000F52
	add r0, r0, r2
	add r0, r5, r0
	ldrb r0, [r0]
	cmp r0, #1
	beq _080EA5F6
	cmp r0, #1
	bgt _080EA5E8
	cmp r0, #0
	beq _080EA5EE
	b _080EA606
_080EA5B0:
	.4byte 0x000009AD
_080EA5B4:
	.4byte 0x000009E8
_080EA5B8:
	.4byte 0x00000CF8
_080EA5BC:
	.4byte 0x00000F92
_080EA5C0:
	.4byte gRam
_080EA5C4:
	.4byte 0x00001082
_080EA5C8:
	.4byte 0x00000F52
_080EA5CC:
	.4byte 0x00001052
_080EA5D0:
	.4byte 0x00000996
_080EA5D4:
	.4byte 0x0000164C
_080EA5D8:
	.4byte 0x00000F82
_080EA5DC:
	.4byte 0x00001022
_080EA5E0:
	.4byte 0x00000F72
_080EA5E4:
	.4byte 0x00001072
_080EA5E8:
	cmp r0, #2
	beq _080EA5FE
	b _080EA606
_080EA5EE:
	add r0, r5, #0
	bl sub_080EA700
	b _080EA6E8
_080EA5F6:
	add r0, r5, #0
	bl sub_080EA788
	b _080EA6E8
_080EA5FE:
	add r0, r5, #0
	bl sub_080EAB4C
	b _080EA6E8
_080EA606:
	add r0, r5, #0
	bl sub_080EA8EC
	b _080EA6E8
_080EA60E:
	ldr r0, _080EA694  @ =0x00001122
	add r1, r6, r0
	add r1, r5, r1
	ldrb r2, [r1]
	mov r0, #16
	orr r0, r0, r2
	strb r0, [r1]
	add r0, r5, #0
	bl Sprite3_Move
	ldr r1, _080EA698  @ =0x00001142
	add r0, r6, r1
	add r0, r5, r0
	mov r1, #12
	strb r1, [r0]
	ldr r2, _080EA69C  @ =0x00001172
	add r0, r6, r2
	add r0, r5, r0
	strb r1, [r0]
	ldr r1, _080EA6A0  @ =0x00000996
	add r0, r6, r1
	ldrb r1, [r0]
	add r0, r5, #0
	eor r0, r0, r1
	mov r1, #7
	and r0, r0, r1
	cmp r0, #0
	bne _080EA68A
	add r0, r5, #0
	bl sub_080C4F98
	mov r4, #15
_080EA64E:
	cmp r4, r5
	beq _080EA684
	ldr r1, _080EA6A4  @ =gRam
	ldr r2, _080EA6A8  @ =0x00000FF2
	add r0, r1, r2
	add r0, r4, r0
	ldrb r0, [r0]
	cmp r0, #11
	beq _080EA684
	sub r2, r2, #80
	add r0, r1, r2
	add r0, r4, r0
	ldrb r0, [r0]
	cmp r0, #8
	bls _080EA684
	ldr r2, _080EA6AC  @ =0x000010C2
	add r0, r1, r2
	add r0, r4, r0
	ldrb r0, [r0]
	cmp r0, #0
	bne _080EA684
	lsl r1, r4, #24
	lsr r1, r1, #24
	add r0, r5, #0
	mov r2, #2
	bl sub_080E46C8
_080EA684:
	sub r4, r4, #1
	cmp r4, #0
	bge _080EA64E
_080EA68A:
	add r0, r5, #0
	bl sub_080EAB14
	b _080EA6E8
	.byte 0x00
	.byte 0x00
_080EA694:
	.4byte 0x00001122
_080EA698:
	.4byte 0x00001142
_080EA69C:
	.4byte 0x00001172
_080EA6A0:
	.4byte 0x00000996
_080EA6A4:
	.4byte gRam
_080EA6A8:
	.4byte 0x00000FF2
_080EA6AC:
	.4byte 0x000010C2
_080EA6B0:
	ldr r1, _080EA6F0  @ =0x00000FF2
	add r0, r4, r1
	add r0, r5, r0
	mov r1, #61
	strb r1, [r0]
	add r0, r5, #0
	bl sub_080CEB84
	ldr r2, _080EA6F4  @ =0x00001002
	add r1, r4, r2
	add r1, r5, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	ldr r1, _080EA6F8  @ =0x00000FC2
	add r0, r4, r1
	add r0, r5, r0
	mov r1, #48
	strb r1, [r0]
	mov r0, #21
	mov r1, #0
	bl sub_0812A324
	ldr r2, _080EA6FC  @ =0x00001172
	add r0, r4, r2
	add r0, r5, r0
	mov r1, #21
	strb r1, [r0]
_080EA6E8:
	add sp, sp, #4
	pop {r4-r7}
	pop {r0}
	bx r0
_080EA6F0:
	.4byte 0x00000FF2
_080EA6F4:
	.4byte 0x00001002
_080EA6F8:
	.4byte 0x00000FC2
_080EA6FC:
	.4byte 0x00001172
	THUMB_FUNC_END sub_080EA3E4

