	THUMB_FUNC_START sub_080E086C
sub_080E086C: @ 0x080E086C
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	sub sp, sp, #12
	lsl r0, r0, #24
	lsr r6, r0, #24
	mov r0, #0
	str r0, [sp, #8]
	mov r10, r0
	ldr r4, _080E08F0  @ =gRam
	ldr r1, _080E08F4  @ =0x00000DB5
	add r0, r4, r1
	ldrb r0, [r0]
	cmp r0, #0
	bne _080E0898
	ldr r2, _080E08F8  @ =0x00000DB6
	add r1, r4, r2
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
_080E0898:
	add r0, r6, #0
	bl sub_080E0F0C
	add r0, r6, #0
	bl Sprite3_CheckIfActive
	lsl r0, r0, #24
	cmp r0, #0
	beq _080E08AC
	b _080E0C04
_080E08AC:
	ldr r3, _080E08FC  @ =0x00001132
	add r0, r4, r3
	add r0, r6, r0
	mov r1, r10
	strb r1, [r0]
	add r0, r6, #0
	bl sub_080C500C
	lsl r0, r0, #24
	cmp r0, #0
	beq _080E08D2
	bl sub_080AF16C
	ldr r2, _080E0900  @ =0x00001719
	add r0, r4, r2
	mov r3, r10
	strb r3, [r0]
	bl sub_08093078
_080E08D2:
	ldr r1, _080E0904  @ =0x00000FC2
	add r0, r4, r1
	add r5, r6, r0
	ldrb r1, [r5]
	cmp r1, #0
	bne _080E0928
	ldr r2, _080E0908  @ =0x00000F52
	add r0, r4, r2
	add r0, r6, r0
	ldrb r0, [r0]
	cmp r0, #0
	bne _080E090C
	mov r1, #0
	b _080E0918
	.byte 0x00
	.byte 0x00
_080E08F0:
	.4byte gRam
_080E08F4:
	.4byte 0x00000DB5
_080E08F8:
	.4byte 0x00000DB6
_080E08FC:
	.4byte 0x00001132
_080E0900:
	.4byte 0x00001719
_080E0904:
	.4byte 0x00000FC2
_080E0908:
	.4byte 0x00000F52
_080E090C:
	ldr r3, _080E0920  @ =0x00000996
	add r0, r4, r3
	ldrb r0, [r0]
	lsr r1, r0, #5
	mov r0, #3
	and r1, r1, r0
_080E0918:
	ldr r0, _080E0924  @ =gUnknown_081767E8
	add r0, r1, r0
	ldrb r1, [r0]
	b _080E0942
_080E0920:
	.4byte 0x00000996
_080E0924:
	.4byte gUnknown_081767E8
_080E0928:
	mov r0, #7
	and r0, r0, r1
	cmp r0, #0
	bne _080E0938
	add r0, r6, #0
	mov r1, #34
	bl sub_080CF0AC
_080E0938:
	ldrb r1, [r5]
	mov r0, #4
	and r0, r0, r1
	lsl r0, r0, #24
	lsr r1, r0, #26
_080E0942:
	ldr r0, _080E0ACC  @ =gRam
	mov r8, r0
	ldr r0, _080E0AD0  @ =0x00000F92
	add r0, r0, r8
	add r0, r6, r0
	strb r1, [r0]
	ldr r0, _080E0AD4  @ =0x00000F52
	add r0, r0, r8
	add r4, r6, r0
	ldrb r0, [r4]
	cmp r0, #2
	beq _080E095C
	b _080E0B18
_080E095C:
	ldr r0, _080E0AD8  @ =0x00001082
	add r0, r0, r8
	add r4, r6, r0
	ldrb r0, [r4]
	cmp r0, #0
	bne _080E098E
	ldr r1, _080E0ADC  @ =0x00000DB5
	add r1, r1, r8
	mov r0, #5
	strb r0, [r1]
	mov r0, #2
	bl sub_080AF5F8
	ldr r0, _080E0AE0  @ =0x00000FD2
	add r0, r0, r8
	add r0, r6, r0
	mov r1, #39
	strb r1, [r0]
	mov r0, #20
	neg r0, r0
	bl sub_080AA83C
	ldrb r0, [r4]
	add r0, r0, #1
	strb r0, [r4]
_080E098E:
	mov r0, #52
	bl sub_080CF370
	mov r1, sp
	add r1, r1, #5
	add r0, sp, #4
	add r2, r6, #0
	bl sub_080C5ACC
	lsl r0, r0, #24
	cmp r0, #0
	beq _080E09A8
	b _080E0C04
_080E09A8:
	ldr r0, _080E0ADC  @ =0x00000DB5
	add r0, r0, r8
	ldrb r0, [r0]
	ldr r2, _080E0AE4  @ =0x00000979
	add r2, r2, r8
	strb r0, [r2]
	ldr r0, _080E0AE0  @ =0x00000FD2
	add r0, r0, r8
	add r0, r6, r0
	ldrb r0, [r0]
	lsl r1, r0, #24
	cmp r1, #0
	beq _080E09CC
	ldr r0, _080E0AE8  @ =gUnknown_081767EC
	lsr r1, r1, #27
	add r1, r1, r0
	ldrb r0, [r1]
	strb r0, [r2]
_080E09CC:
	ldrb r0, [r2]
	lsl r0, r0, #25
	mov r1, #224
	lsl r1, r1, #19
	add r5, r0, r1
	cmp r5, #0
	blt _080E0A46
	add r7, sp, #4
	ldr r2, _080E0AEC  @ =0x00000964
	add r2, r2, r8
	mov r9, r2
_080E09E2:
	ldr r0, _080E0AF0  @ =gUnknown_03003E74
	ldrb r1, [r7]
	ldrh r0, [r0]
	add r0, r0, r1
	lsl r0, r0, #16
	lsr r0, r0, #16
	mov r1, #150
	lsl r1, r1, #4
	add r1, r1, r8
	ldrh r2, [r1]
	sub r2, r2, #20
	ldr r1, _080E0AF4  @ =gUnknown_081767F2
	asr r5, r5, #24
	add r1, r5, r1
	ldrb r1, [r1]
	lsl r1, r1, #24
	asr r1, r1, #24
	add r1, r1, r2
	lsl r1, r1, #16
	lsr r1, r1, #16
	mov r2, r9
	ldrh r3, [r2]
	sub r3, r3, #48
	ldr r2, _080E0AF8  @ =gUnknown_08176804
	add r2, r5, r2
	ldrb r2, [r2]
	lsl r2, r2, #24
	asr r2, r2, #24
	add r2, r2, r3
	lsl r2, r2, #16
	lsr r2, r2, #16
	ldr r3, _080E0AFC  @ =gUnknown_08176816
	add r3, r5, r3
	ldrb r3, [r3]
	ldr r4, _080E0B00  @ =gUnknown_08176828
	add r4, r5, r4
	ldrb r4, [r4]
	lsl r4, r4, #8
	orr r3, r3, r4
	mov r4, #0
	str r4, [sp]
	bl sub_080C6004
	sub r5, r5, #1
	ldrb r0, [r7]
	add r0, r0, #1
	strb r0, [r7]
	lsl r5, r5, #24
	cmp r5, #0
	bge _080E09E2
_080E0A46:
	ldr r4, _080E0ACC  @ =gRam
	ldr r3, _080E0ADC  @ =0x00000DB5
	add r1, r4, r3
	ldr r2, _080E0B04  @ =0x000010E2
	add r0, r4, r2
	add r0, r6, r0
	ldrb r1, [r1]
	ldrb r0, [r0]
	orr r1, r1, r0
	add r3, r3, #96
	add r0, r4, r3
	ldrb r0, [r0]
	orr r1, r1, r0
	ldr r2, _080E0B08  @ =0x00000E16
	add r0, r4, r2
	ldrb r0, [r0]
	orr r1, r1, r0
	add r3, r3, #2
	add r0, r4, r3
	ldrb r0, [r0]
	orr r1, r1, r0
	add r2, r2, #2
	add r0, r4, r2
	ldrb r0, [r0]
	orr r1, r1, r0
	add r3, r3, #2
	add r0, r4, r3
	ldrb r0, [r0]
	orr r1, r1, r0
	cmp r1, #0
	beq _080E0A86
	b _080E0B98
_080E0A86:
	ldr r1, _080E0B0C  @ =0x00001132
	add r0, r4, r1
	add r0, r6, r0
	mov r1, #10
	strb r1, [r0]
	add r0, r6, #0
	bl sub_080C500C
	lsl r0, r0, #24
	cmp r0, #0
	bne _080E0A9E
	b _080E0B98
_080E0A9E:
	ldr r1, _080E0B10  @ =gUnknown_03003E70
	mov r0, #1
	strb r0, [r1]
	ldr r2, _080E0B14  @ =0x00000546
	add r0, r4, r2
	ldrh r1, [r0]
	mov r0, #129
	lsl r0, r0, #7
	and r0, r0, r1
	cmp r0, #0
	beq _080E0B98
	add r0, r6, #0
	mov r1, #139
	bl sub_080E1058
	ldr r3, _080E0AD4  @ =0x00000F52
	add r1, r4, r3
	add r1, r6, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	b _080E0B98
	.byte 0x00
	.byte 0x00
_080E0ACC:
	.4byte gRam
_080E0AD0:
	.4byte 0x00000F92
_080E0AD4:
	.4byte 0x00000F52
_080E0AD8:
	.4byte 0x00001082
_080E0ADC:
	.4byte 0x00000DB5
_080E0AE0:
	.4byte 0x00000FD2
_080E0AE4:
	.4byte 0x00000979
_080E0AE8:
	.4byte gUnknown_081767EC
_080E0AEC:
	.4byte 0x00000964
_080E0AF0:
	.4byte gUnknown_03003E74
_080E0AF4:
	.4byte gUnknown_081767F2
_080E0AF8:
	.4byte gUnknown_08176804
_080E0AFC:
	.4byte gUnknown_08176816
_080E0B00:
	.4byte gUnknown_08176828
_080E0B04:
	.4byte 0x000010E2
_080E0B08:
	.4byte 0x00000E16
_080E0B0C:
	.4byte 0x00001132
_080E0B10:
	.4byte gUnknown_03003E70
_080E0B14:
	.4byte 0x00000546
_080E0B18:
	cmp r0, #1
	bne _080E0B30
	ldr r0, _080E0B2C  @ =0x00001AE2
	add r0, r0, r8
	ldrb r0, [r0]
	cmp r0, #0
	beq _080E0B9E
	mov r0, #1
	mov r10, r0
	b _080E0B98
_080E0B2C:
	.4byte 0x00001AE2
_080E0B30:
	cmp r0, #3
	beq _080E0B7C
	ldr r0, _080E0B70  @ =0x00001132
	add r0, r0, r8
	add r0, r6, r0
	mov r1, #10
	strb r1, [r0]
	add r0, r6, #0
	bl sub_080C500C
	lsl r0, r0, #24
	cmp r0, #0
	beq _080E0B98
	ldr r1, _080E0B74  @ =gUnknown_03003E70
	mov r0, #1
	strb r0, [r1]
	ldr r0, _080E0B78  @ =0x00000546
	add r0, r0, r8
	ldrh r1, [r0]
	mov r0, #129
	lsl r0, r0, #7
	and r0, r0, r1
	cmp r0, #0
	beq _080E0B98
	add r0, r6, #0
	mov r1, #136
	bl sub_080E1058
	ldrb r0, [r4]
	add r0, r0, #1
	strb r0, [r4]
	b _080E0B98
_080E0B70:
	.4byte 0x00001132
_080E0B74:
	.4byte gUnknown_03003E70
_080E0B78:
	.4byte 0x00000546
_080E0B7C:
	ldr r0, _080E0B8C  @ =0x00001AE2
	add r0, r0, r8
	ldrb r0, [r0]
	cmp r0, #0
	beq _080E0B90
	mov r1, #1
	mov r10, r1
	b _080E0B98
_080E0B8C:
	.4byte 0x00001AE2
_080E0B90:
	mov r0, #1
	strb r0, [r4]
	mov r2, #1
	str r2, [sp, #8]
_080E0B98:
	ldr r3, [sp, #8]
	cmp r3, #0
	beq _080E0BEA
_080E0B9E:
	bl sub_080AA868
	cmp r0, #19
	bgt _080E0BC4
	ldr r0, _080E0BBC  @ =gRam
	ldr r1, _080E0BC0  @ =0x00000F52
	add r0, r0, r1
	add r0, r6, r0
	mov r1, #0
	strb r1, [r0]
	add r0, r6, #0
	mov r1, #138
	bl sub_080E1058
	b _080E0BEA
_080E0BBC:
	.4byte gRam
_080E0BC0:
	.4byte 0x00000F52
_080E0BC4:
	ldr r1, _080E0C14  @ =gRam
	ldr r2, _080E0C18  @ =0x00001082
	add r0, r1, r2
	add r0, r6, r0
	mov r2, #0
	strb r2, [r0]
	ldr r3, _080E0C1C  @ =0x00000DB4
	add r0, r1, r3
	strb r2, [r0]
	ldr r0, _080E0C20  @ =0x00000F52
	add r1, r1, r0
	add r1, r6, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	add r0, r6, #0
	mov r1, #137
	bl sub_080E1058
_080E0BEA:
	mov r1, r10
	cmp r1, #0
	beq _080E0C04
	ldr r0, _080E0C14  @ =gRam
	ldr r2, _080E0C20  @ =0x00000F52
	add r0, r0, r2
	add r0, r6, r0
	mov r1, #0
	strb r1, [r0]
	add r0, r6, #0
	mov r1, #138
	bl sub_080E1058
_080E0C04:
	add sp, sp, #12
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r0}
	bx r0
_080E0C14:
	.4byte gRam
_080E0C18:
	.4byte 0x00001082
_080E0C1C:
	.4byte 0x00000DB4
_080E0C20:
	.4byte 0x00000F52
	THUMB_FUNC_END sub_080E086C

