	THUMB_FUNC_START sub_0806F8B8
sub_0806F8B8: @ 0x0806F8B8
	push {r4-r7,lr}
	ldr r5, _0806F9D8  @ =gRam
	ldr r0, _0806F9DC  @ =0x000009E4
	add r4, r5, r0
	ldrb r0, [r4]
	mov r1, #2
	eor r0, r0, r1
	strb r0, [r4]
	ldr r2, _0806F9E0  @ =0x00000AB4
	add r1, r5, r2
	ldrb r1, [r1]
	orr r0, r0, r1
	ldr r3, _0806F9E4  @ =0x000009E3
	add r1, r5, r3
	ldrb r1, [r1]
	orr r0, r0, r1
	ldr r7, _0806F9E8  @ =0x000009E2
	add r1, r5, r7
	strb r0, [r1]
	ldr r0, _0806F9EC  @ =0x00000B74
	add r2, r5, r0
	mov r1, #128
	lsl r1, r1, #1
	add r0, r1, #0
	ldrh r3, [r2]
	add r1, r0, r3
	strh r1, [r2]
	ldr r7, _0806F9F0  @ =0x00000B78
	add r1, r5, r7
	ldrh r2, [r1]
	add r0, r0, r2
	strh r0, [r1]
	ldr r3, _0806F9F4  @ =0x00000AA8
	add r0, r5, r3
	ldrh r3, [r0]
	lsr r3, r3, #4
	ldr r7, _0806F9F8  @ =0x0000096C
	add r0, r5, r7
	strh r3, [r0]
	ldr r0, _0806F9FC  @ =0x000009DA
	add r6, r5, r0
	ldrh r2, [r6]
	lsl r2, r2, #1
	ldr r1, _0806FA00  @ =gUnknown_02002000
	add r2, r2, r1
	ldr r7, _0806FA04  @ =0x00000AA6
	add r0, r5, r7
	ldrh r1, [r0]
	mov r0, #240
	lsl r0, r0, #8
	and r0, r0, r1
	add r7, r7, #8
	add r1, r5, r7
	ldrh r1, [r1]
	orr r0, r0, r1
	orr r3, r3, r0
	strh r3, [r2]
	ldrb r1, [r4]
	ldr r3, _0806FA08  @ =gUnknown_0814CE14
	lsl r0, r1, #1
	add r0, r0, r3
	ldrh r2, [r0]
	add r7, r7, #214
	add r0, r5, r7
	strh r2, [r0]
	add r1, r1, #1
	lsl r1, r1, #1
	add r1, r1, r3
	ldrh r1, [r1]
	ldr r2, _0806FA0C  @ =0x00000B86
	add r0, r5, r2
	strh r1, [r0]
	mov r0, #0
	bl sub_0806C814
	ldr r3, _0806FA10  @ =0x000009AD
	add r1, r5, r3
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	ldrb r0, [r4]
	cmp r0, #0
	beq _0806F960
	b _0806FAC0
_0806F960:
	sub r7, r7, #14
	add r2, r5, r7
	mov r1, #128
	lsl r1, r1, #2
	add r0, r1, #0
	ldrh r3, [r2]
	add r1, r0, r3
	strh r1, [r2]
	add r7, r7, #4
	add r1, r5, r7
	ldrh r2, [r1]
	add r0, r0, r2
	strh r0, [r1]
	ldrh r2, [r6]
	ldr r7, _0806FA14  @ =0x000009DC
	add r3, r5, r7
	strh r2, [r3]
	ldr r1, _0806FA18  @ =0x00000A22
	add r0, r5, r1
	ldrh r0, [r0]
	cmp r0, #142
	bne _0806FA34
	ldr r2, _0806FA1C  @ =0x00000AB2
	add r1, r5, r2
	ldrb r0, [r1]
	cmp r0, #255
	beq _0806F9AA
	ldrh r0, [r1]
	cmp r0, #2
	bne _0806F99E
	mov r0, #0
_0806F99E:
	asr r0, r0, #1
	ldr r3, _0806FA20  @ =gUnknown_0200235C
	add r0, r0, r3
	ldr r1, _0806FA24  @ =gKeyCount
	ldrb r1, [r1]
	strb r1, [r0]
_0806F9AA:
	bl sub_08070994
	ldr r1, _0806F9D8  @ =gRam
	ldr r7, _0806FA28  @ =0x00000A1A
	add r2, r1, r7
	mov r3, #0
	mov r4, #0
	mov r0, #8
	strh r0, [r2]
	ldr r0, _0806FA2C  @ =0x000009AC
	add r2, r1, r0
	mov r0, #15
	strb r0, [r2]
	ldr r2, _0806FA10  @ =0x000009AD
	add r0, r1, r2
	strb r3, [r0]
	ldr r3, _0806FA30  @ =0x000009E8
	add r1, r1, r3
	strh r4, [r1]
	bl sub_0807166C
	b _0806FB52
	.byte 0x00
	.byte 0x00
_0806F9D8:
	.4byte gRam
_0806F9DC:
	.4byte 0x000009E4
_0806F9E0:
	.4byte 0x00000AB4
_0806F9E4:
	.4byte 0x000009E3
_0806F9E8:
	.4byte 0x000009E2
_0806F9EC:
	.4byte 0x00000B74
_0806F9F0:
	.4byte 0x00000B78
_0806F9F4:
	.4byte 0x00000AA8
_0806F9F8:
	.4byte 0x0000096C
_0806F9FC:
	.4byte 0x000009DA
_0806FA00:
	.4byte gUnknown_02002000
_0806FA04:
	.4byte 0x00000AA6
_0806FA08:
	.4byte gUnknown_0814CE14
_0806FA0C:
	.4byte 0x00000B86
_0806FA10:
	.4byte 0x000009AD
_0806FA14:
	.4byte 0x000009DC
_0806FA18:
	.4byte 0x00000A22
_0806FA1C:
	.4byte 0x00000AB2
_0806FA20:
	.4byte gUnknown_0200235C
_0806FA24:
	.4byte gKeyCount
_0806FA28:
	.4byte 0x00000A1A
_0806FA2C:
	.4byte 0x000009AC
_0806FA30:
	.4byte 0x000009E8
_0806FA34:
	mov r1, #207
	and r1, r1, r0
	cmp r1, #136
	beq _0806FA40
	cmp r1, #138
	bne _0806FA60
_0806FA40:
	mov r1, #255
	lsl r1, r1, #8
	and r1, r1, r2
	ldr r7, _0806FA5C  @ =0x00000CF3
	add r0, r5, r7
	ldrb r0, [r0]
	orr r0, r0, r1
	strh r0, [r6]
	ldrh r1, [r6]
	sub r1, r1, #16
	mov r0, #0
	bl sub_0806F090
	b _0806FA7A
_0806FA5C:
	.4byte 0x00000CF3
_0806FA60:
	ldr r1, _0806FAE8  @ =0x00000B36
	add r0, r5, r1
	ldrh r1, [r0]
	lsl r0, r2, #16
	lsr r0, r0, #16
	cmp r1, r0
	beq _0806FA74
	strh r1, [r3]
	bl sub_0806F1E8
_0806FA74:
	ldrh r0, [r6]
	add r0, r0, #16
	strh r0, [r6]
_0806FA7A:
	ldr r3, _0806FAEC  @ =gRam
	ldr r2, _0806FAF0  @ =0x000009AD
	add r1, r3, r2
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	ldr r7, _0806FAF4  @ =0x00000A11
	add r4, r3, r7
	ldrb r1, [r4]
	mov r0, #1
	and r0, r0, r1
	cmp r0, #0
	beq _0806FAAA
	mov r0, #161
	lsl r0, r0, #4
	add r2, r3, r0
	ldrb r0, [r2]
	mov r1, #1
	eor r0, r0, r1
	strb r0, [r2]
	ldrb r1, [r2]
	ldr r2, _0806FAF8  @ =0x00000B1E
	add r0, r3, r2
	strh r1, [r0]
_0806FAAA:
	ldrb r1, [r4]
	mov r0, #2
	and r0, r0, r1
	cmp r0, #0
	beq _0806FAC0
	ldr r7, _0806FAFC  @ =0x00000AB2
	add r0, r3, r7
	ldrh r1, [r0]
	mov r2, #2
	eor r1, r1, r2
	strh r1, [r0]
_0806FAC0:
	ldr r1, _0806FAEC  @ =gRam
	ldr r2, _0806FAF4  @ =0x00000A11
	add r0, r1, r2
	mov r2, #0
	strb r2, [r0]
	mov r3, #158
	lsl r3, r3, #4
	add r0, r1, r3
	strb r2, [r0]
	ldr r7, _0806FB00  @ =0x000009E3
	add r0, r1, r7
	ldrb r0, [r0]
	add r2, r1, #0
	cmp r0, #0
	bne _0806FB04
	mov r0, #150
	lsl r0, r0, #4
	add r1, r2, r0
	mov r0, #1
	b _0806FB0C
_0806FAE8:
	.4byte 0x00000B36
_0806FAEC:
	.4byte gRam
_0806FAF0:
	.4byte 0x000009AD
_0806FAF4:
	.4byte 0x00000A11
_0806FAF8:
	.4byte 0x00000B1E
_0806FAFC:
	.4byte 0x00000AB2
_0806FB00:
	.4byte 0x000009E3
_0806FB04:
	mov r3, #150
	lsl r3, r3, #4
	add r1, r2, r3
	mov r0, #2
_0806FB0C:
	strh r0, [r1]
	ldr r7, _0806FB3C  @ =0x00000AF8
	add r0, r2, r7
	ldrb r0, [r0]
	cmp r0, #0
	bne _0806FB48
	ldr r1, _0806FB40  @ =gUnknown_0814CDDC
	ldr r3, _0806FB44  @ =0x000009E2
	add r0, r2, r3
	ldrb r0, [r0]
	add r0, r0, r1
	ldrb r0, [r0]
	mov r7, #150
	lsl r7, r7, #4
	add r1, r2, r7
	mov r3, #0
	ldrsh r1, [r1, r3]
	and r0, r0, r1
	cmp r0, #0
	bne _0806FB52
	add r7, r7, #128
	add r1, r2, r7
	b _0806FB4E
	.byte 0x00
	.byte 0x00
_0806FB3C:
	.4byte 0x00000AF8
_0806FB40:
	.4byte gUnknown_0814CDDC
_0806FB44:
	.4byte 0x000009E2
_0806FB48:
	mov r0, #158
	lsl r0, r0, #4
	add r1, r2, r0
_0806FB4E:
	mov r0, #2
	strb r0, [r1]
_0806FB52:
	pop {r4-r7}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_0806F8B8

