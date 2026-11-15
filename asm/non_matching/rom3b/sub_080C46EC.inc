	THUMB_FUNC_START sub_080C46EC
sub_080C46EC: @ 0x080C46EC
	push {r4-r7,lr}
	mov r7, r9
	mov r6, r8
	push {r6,r7}
	lsl r0, r0, #24
	lsr r5, r0, #24
	mov r0, #0
	mov r8, r0
	ldr r3, _080C4794  @ =gRam
	ldr r1, _080C4798  @ =0x00001132
	add r0, r3, r1
	add r0, r5, r0
	ldrb r0, [r0]
	cmp r0, #0
	bne _080C47C0
	ldr r2, _080C479C  @ =0x000016C4
	add r0, r3, r2
	ldrb r1, [r0]
	ldr r4, _080C47A0  @ =0x000016C5
	add r0, r3, r4
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	lsl r0, r0, #8
	add r1, r1, r0
	ldr r6, _080C47A4  @ =0x00001622
	add r0, r3, r6
	ldrb r2, [r0]
	sub r4, r4, #162
	add r0, r3, r4
	ldrb r0, [r0]
	lsl r0, r0, #8
	add r2, r2, r0
	sub r1, r1, r2
	lsl r1, r1, #16
	ldr r6, _080C47A8  @ =0x00001142
	add r0, r3, r6
	add r4, r5, r0
	ldrb r2, [r4]
	ldr r6, _080C47AC  @ =0x00000978
	add r0, r3, r6
	strb r2, [r0]
	ldr r2, _080C47B0  @ =0x00000979
	add r0, r3, r2
	mov r6, r8
	strb r6, [r0]
	mov r0, #176
	lsl r0, r0, #12
	add r1, r1, r0
	lsr r1, r1, #16
	cmp r1, #22
	bhi _080C4790
	mov r1, #182
	lsl r1, r1, #5
	add r0, r3, r1
	ldrb r1, [r0]
	ldr r2, _080C47B4  @ =0x000016C1
	add r0, r3, r2
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	lsl r0, r0, #8
	orr r1, r1, r0
	ldrb r4, [r4]
	add r1, r1, r4
	ldr r4, _080C47B8  @ =0x00001624
	add r0, r3, r4
	ldrb r2, [r0]
	ldr r6, _080C47BC  @ =0x00001625
	add r0, r3, r6
	ldrb r0, [r0]
	lsl r0, r0, #8
	add r2, r2, r0
	sub r1, r1, r2
	lsl r1, r1, #16
	mov r0, #128
	lsl r0, r0, #13
	add r1, r1, r0
	lsr r1, r1, #16
	mov r2, #1
	cmp r1, #23
	bls _080C47D2
_080C4790:
	mov r2, #0
	b _080C47D2
_080C4794:
	.4byte gRam
_080C4798:
	.4byte 0x00001132
_080C479C:
	.4byte 0x000016C4
_080C47A0:
	.4byte 0x000016C5
_080C47A4:
	.4byte 0x00001622
_080C47A8:
	.4byte 0x00001142
_080C47AC:
	.4byte 0x00000978
_080C47B0:
	.4byte 0x00000979
_080C47B4:
	.4byte 0x000016C1
_080C47B8:
	.4byte 0x00001624
_080C47BC:
	.4byte 0x00001625
_080C47C0:
	bl sub_080C44FC
	add r0, r5, #0
	bl sub_080C4574
	bl sub_080C466C
	lsl r0, r0, #24
	lsr r2, r0, #24
_080C47D2:
	ldr r7, _080C47E8  @ =gRam
	ldr r1, _080C47EC  @ =0x00001012
	add r0, r7, r1
	add r0, r5, r0
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	cmp r0, #0
	bge _080C47F0
	mov r8, r2
	b _080C490C
_080C47E8:
	.4byte gRam
_080C47EC:
	.4byte 0x00001012
_080C47F0:
	cmp r2, #0
	beq _080C47FE
	ldr r2, _080C4804  @ =0x00001702
	add r0, r7, r2
	ldrb r0, [r0]
	cmp r0, #0
	beq _080C4808
_080C47FE:
	mov r3, #0
	mov r8, r3
	b _080C490C
_080C4804:
	.4byte 0x00001702
_080C4808:
	ldr r4, _080C4898  @ =0x0000176C
	add r0, r7, r4
	ldrb r3, [r0]
	cmp r3, #0
	beq _080C4814
	b _080C4912
_080C4814:
	ldr r6, _080C489C  @ =0x00001791
	add r0, r7, r6
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	cmp r0, #0
	blt _080C4912
	ldr r1, _080C48A0  @ =0x000011B2
	add r0, r7, r1
	add r0, r5, r0
	ldrb r1, [r0]
	mov r0, #32
	and r0, r0, r1
	cmp r0, #0
	beq _080C4912
	ldr r0, _080C48A4  @ =gShield
	ldrb r0, [r0]
	cmp r0, #0
	beq _080C4912
	ldr r2, _080C48A8  @ =0x000016D5
	add r0, r7, r2
	ldrb r2, [r0]
	ldr r4, _080C48AC  @ =0x00000FA2
	add r0, r7, r4
	add r0, r0, r5
	mov r9, r0
	strb r3, [r0]
	ldr r6, _080C48B0  @ =0x000016EA
	add r0, r7, r6
	ldrb r0, [r0]
	cmp r0, #0
	beq _080C485C
	ldr r1, _080C48B4  @ =gUnknown_081720B8
	lsr r0, r2, #1
	add r0, r0, r1
	ldrb r2, [r0]
_080C485C:
	ldr r1, _080C48B8  @ =gUnknown_081720B4
	ldr r3, _080C48BC  @ =0x00000FB2
	add r0, r7, r3
	add r6, r5, r0
	ldrb r0, [r6]
	add r0, r0, r1
	ldrb r0, [r0]
	cmp r2, r0
	bne _080C4912
	ldr r4, _080C48C0  @ =0x00000FF2
	add r0, r7, r4
	add r0, r5, r0
	ldrb r4, [r0]
	add r0, r5, #0
	mov r1, #9
	bl sub_080CF0AC
	add r0, r5, #0
	bl sub_080C444C
	cmp r4, #149
	beq _080C4900
	cmp r4, #155
	beq _080C48D4
	cmp r4, #27
	bne _080C48C4
	add r0, r5, #0
	bl sub_080C6E3C
	b _080C4908
_080C4898:
	.4byte 0x0000176C
_080C489C:
	.4byte 0x00001791
_080C48A0:
	.4byte 0x000011B2
_080C48A4:
	.4byte gShield
_080C48A8:
	.4byte 0x000016D5
_080C48AC:
	.4byte 0x00000FA2
_080C48B0:
	.4byte 0x000016EA
_080C48B4:
	.4byte gUnknown_081720B8
_080C48B8:
	.4byte gUnknown_081720B4
_080C48BC:
	.4byte 0x00000FB2
_080C48C0:
	.4byte 0x00000FF2
_080C48C4:
	cmp r4, #12
	bne _080C490C
	add r0, r5, #0
	bl sub_080E5B38
	mov r0, #1
	mov r8, r0
	b _080C490C
_080C48D4:
	add r0, r5, #0
	bl Sprite_Invert_XY_Speeds
	ldrb r0, [r6]
	mov r1, #1
	eor r0, r0, r1
	strb r0, [r6]
	ldr r2, _080C48FC  @ =0x00000F52
	add r1, r7, r2
	add r1, r5, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	mov r0, #9
	mov r3, r9
	strb r0, [r3]
	mov r4, #0
	mov r8, r4
	b _080C490C
	.byte 0x00
	.byte 0x00
_080C48FC:
	.4byte 0x00000F52
_080C4900:
	add r0, r5, #0
	mov r1, #44
	bl sub_080CF140
_080C4908:
	mov r6, #0
	mov r8, r6
_080C490C:
	mov r0, #0
	cmp r0, #0
	beq _080C4930
_080C4912:
	add r0, r5, #0
	bl sub_080C3BD0
	ldr r0, _080C4940  @ =gRam
	ldr r1, _080C4944  @ =0x00000FF2
	add r0, r0, r1
	add r0, r5, r0
	ldrb r0, [r0]
	cmp r0, #12
	bne _080C492C
	add r0, r5, #0
	bl sub_080E5B38
_080C492C:
	mov r2, #1
	mov r8, r2
_080C4930:
	mov r0, r8
	pop {r3,r4}
	mov r8, r3
	mov r9, r4
	pop {r4-r7}
	pop {r1}
	bx r1
	.byte 0x00
	.byte 0x00
_080C4940:
	.4byte gRam
_080C4944:
	.4byte 0x00000FF2
	THUMB_FUNC_END sub_080C46EC

