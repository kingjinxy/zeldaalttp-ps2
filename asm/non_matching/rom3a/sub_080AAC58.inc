	THUMB_FUNC_START sub_080AAC58
sub_080AAC58: @ 0x080AAC58
	push {r4-r7,lr}
	ldr r0, _080AAC70  @ =gRam
	ldr r2, _080AAC74  @ =0x00000B48
	add r1, r0, r2
	ldrb r2, [r1]
	add r7, r0, #0
	cmp r2, #0
	bne _080AAC78
	bl sub_080AB13C
	b _080AB02E
	.byte 0x00
	.byte 0x00
_080AAC70:
	.4byte gRam
_080AAC74:
	.4byte 0x00000B48
_080AAC78:
	add r0, r2, #1
	lsl r0, r0, #16
	lsr r2, r0, #16
	cmp r2, #192
	bne _080AAC84
	mov r2, #0
_080AAC84:
	strh r2, [r1]
	mov r6, #0
	ldr r1, _080AACB0  @ =0x000009DE
	add r0, r7, r1
	ldrh r0, [r0]
	lsl r1, r0, #16
	lsr r5, r1, #23
	mov r0, #1
	and r5, r5, r0
	ldr r2, _080AACB4  @ =0x0000098E
	add r0, r7, r2
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	cmp r0, #4
	beq _080AACEC
	cmp r0, #4
	bgt _080AACB8
	cmp r0, #3
	beq _080AACC2
	b _080AAD94
	.byte 0x00
	.byte 0x00
_080AACB0:
	.4byte 0x000009DE
_080AACB4:
	.4byte 0x0000098E
_080AACB8:
	cmp r0, #5
	beq _080AAD20
	cmp r0, #6
	beq _080AAD4C
	b _080AAD94
_080AACC2:
	cmp r5, #0
	beq _080AACDC
	ldr r0, _080AACD8  @ =gUnknown_0200B272
	mov r2, #10
	strh r2, [r0]
	add r0, r0, #64
	mov r1, #26
	strh r1, [r0]
	sub r0, r0, #62
	strh r2, [r0]
	b _080AADB6
_080AACD8:
	.4byte gUnknown_0200B272
_080AACDC:
	ldr r1, _080AACE8  @ =gUnknown_0200B272
	mov r0, #14
	strh r0, [r1]
	add r1, r1, #64
	mov r0, #30
	b _080AAD36
_080AACE8:
	.4byte gUnknown_0200B272
_080AACEC:
	cmp r5, #0
	beq _080AAD00
	ldr r1, _080AACFC  @ =gUnknown_0200B270
	mov r0, #13
	strh r0, [r1]
	add r1, r1, #64
	mov r0, #29
	b _080AAD0A
_080AACFC:
	.4byte gUnknown_0200B270
_080AAD00:
	ldr r1, _080AAD18  @ =gUnknown_0200B270
	mov r0, #15
	strh r0, [r1]
	add r1, r1, #64
	mov r0, #31
_080AAD0A:
	strh r0, [r1]
	ldr r1, _080AAD1C  @ =gUnknown_0200B272
	mov r0, #14
	strh r0, [r1]
	add r1, r1, #64
	mov r0, #30
	b _080AADAE
_080AAD18:
	.4byte gUnknown_0200B270
_080AAD1C:
	.4byte gUnknown_0200B272
_080AAD20:
	ldr r1, _080AAD48  @ =gUnknown_0200B270
	mov r0, #13
	strh r0, [r1]
	add r1, r1, #64
	mov r0, #29
	strh r0, [r1]
	sub r1, r1, #62
	mov r0, #12
	strh r0, [r1]
	add r1, r1, #64
	mov r0, #28
_080AAD36:
	strh r0, [r1]
	sub r1, r1, #62
	mov r0, #15
	strh r0, [r1]
	add r1, r1, #64
	mov r0, #31
	strh r0, [r1]
	b _080AADBA
	.byte 0x00
	.byte 0x00
_080AAD48:
	.4byte gUnknown_0200B270
_080AAD4C:
	cmp r5, #0
	bne _080AAD54
	cmp r1, #0
	bne _080AAD74
_080AAD54:
	ldr r1, _080AAD70  @ =gUnknown_0200B270
	mov r0, #13
	strh r0, [r1]
	add r1, r1, #64
	mov r0, #29
	strh r0, [r1]
	sub r1, r1, #62
	mov r0, #12
	strh r0, [r1]
	add r1, r1, #64
	mov r0, #28
	strh r0, [r1]
	b _080AADBA
	.byte 0x00
	.byte 0x00
_080AAD70:
	.4byte gUnknown_0200B270
_080AAD74:
	ldr r1, _080AAD90  @ =gUnknown_0200B272
	mov r0, #15
	strh r0, [r1]
	add r1, r1, #64
	mov r0, #31
	strh r0, [r1]
	sub r1, r1, #62
	mov r0, #13
	strh r0, [r1]
	add r1, r1, #64
	mov r0, #29
	strh r0, [r1]
	b _080AADBA
	.byte 0x00
	.byte 0x00
_080AAD90:
	.4byte gUnknown_0200B272
_080AAD94:
	mov r0, #143
	lsl r0, r0, #1
	ldr r1, _080AADE0  @ =gUnknown_0200B270
	strh r0, [r1]
	add r0, r0, #1
	add r1, r1, #66
	strh r0, [r1]
	add r0, r0, #1
	sub r1, r1, #2
	strh r0, [r1]
	sub r1, r1, #62
	ldr r2, _080AADE4  @ =0x0000010F
	add r0, r2, #0
_080AADAE:
	strh r0, [r1]
	ldr r0, _080AADE8  @ =gUnknown_0200B274
	mov r1, #127
	strh r1, [r0]
_080AADB6:
	add r0, r0, #64
	strh r1, [r0]
_080AADBA:
	cmp r5, #0
	beq _080AADF8
	ldr r0, _080AADEC  @ =0x00000A3E
	add r1, r7, r0
	mov r0, #255
	strb r0, [r1]
	add r0, r6, #2
	lsl r0, r0, #16
	lsr r6, r0, #16
	ldr r1, _080AADF0  @ =0x000009DE
	add r0, r7, r1
	ldrh r0, [r0]
	ldr r2, _080AADF4  @ =0xFFFFFF00
	add r1, r2, #0
	orr r0, r0, r1
	mvn r0, r0
	lsl r0, r0, #16
	lsr r4, r0, #16
	b _080AAE26
_080AADE0:
	.4byte gUnknown_0200B270
_080AADE4:
	.4byte 0x0000010F
_080AADE8:
	.4byte gUnknown_0200B274
_080AADEC:
	.4byte 0x00000A3E
_080AADF0:
	.4byte 0x000009DE
_080AADF4:
	.4byte 0xFFFFFF00
_080AADF8:
	ldr r1, _080AAE44  @ =0x000009DE
	add r0, r7, r1
	mov r2, #0
	ldrsh r0, [r0, r2]
	cmp r0, #0
	bne _080AAE20
	sub r1, r1, #4
	add r0, r7, r1
	ldrh r0, [r0]
	cmp r0, #2
	beq _080AAE20
	ldr r2, _080AAE48  @ =0x0000165E
	add r0, r7, r2
	ldrb r0, [r0]
	cmp r0, #1
	bhi _080AAE20
	ldr r0, _080AAE4C  @ =0x00000A3E
	add r1, r7, r0
	mov r0, #3
	strb r0, [r1]
_080AAE20:
	ldr r1, _080AAE44  @ =0x000009DE
	add r0, r7, r1
	ldrb r4, [r0]
_080AAE26:
	ldr r2, _080AAE50  @ =0x0000098E
	add r0, r7, r2
	ldrb r0, [r0]
	sub r0, r0, #2
	lsl r0, r0, #24
	asr r0, r0, #24
	cmp r0, #4
	bls _080AAE38
	b _080AAFEC
_080AAE38:
	lsl r0, r0, #2
	ldr r1, _080AAE54  @ =0x080AAE58
	add r0, r0, r1
	ldr r0, [r0]
	mov pc, r0
	.byte 0x00
	.byte 0x00
_080AAE44:
	.4byte 0x000009DE
_080AAE48:
	.4byte 0x0000165E
_080AAE4C:
	.4byte 0x00000A3E
_080AAE50:
	.4byte 0x0000098E
_080AAE54:
	.4byte 0x080AAE58
	.4byte _080AAE6C
	.4byte _080AAED8
	.4byte _080AAF24
	.4byte _080AAF6C
	.4byte _080AAF8C
_080AAE6C:
	cmp r4, #0
	bne _080AAE74
	cmp r5, #0
	beq _080AAEB8
_080AAE74:
	cmp r5, #0
	bne _080AAE80
	sub r0, r4, #1
	lsl r0, r0, #16
	lsr r4, r0, #16
	b _080AAE90
_080AAE80:
	ldr r1, _080AAEA8  @ =gUnknown_0200B274
	ldr r2, _080AAEAC  @ =0x0000010F
	add r0, r2, #0
	strh r0, [r1]
	add r1, r1, #64
	add r2, r2, #16
	add r0, r2, #0
	strh r0, [r1]
_080AAE90:
	lsr r1, r6, #1
	lsl r1, r1, #1
	ldr r3, _080AAEB0  @ =gUnknown_0200B270
	add r1, r1, r3
	ldr r0, _080AAEB4  @ =gUnknown_0816E024
	lsl r2, r4, #1
	add r0, r2, r0
	ldrh r0, [r0]
	strh r0, [r1]
	add r0, r6, #0
	add r0, r0, #64
	b _080AAF50
_080AAEA8:
	.4byte gUnknown_0200B274
_080AAEAC:
	.4byte 0x0000010F
_080AAEB0:
	.4byte gUnknown_0200B270
_080AAEB4:
	.4byte gUnknown_0816E024
_080AAEB8:
	lsr r0, r6, #1
	lsl r0, r0, #1
	ldr r2, _080AAED4  @ =gUnknown_0200B270
	add r0, r0, r2
	mov r1, #15
	strh r1, [r0]
	add r0, r6, #0
	add r0, r0, #64
	asr r0, r0, #1
	lsl r0, r0, #1
	add r0, r0, r2
	mov r1, #31
	strh r1, [r0]
	b _080AB024
_080AAED4:
	.4byte gUnknown_0200B270
_080AAED8:
	cmp r4, #0
	bne _080AAEE0
	cmp r5, #0
	beq _080AAEFC
_080AAEE0:
	cmp r5, #0
	bne _080AAEEA
	sub r0, r4, #1
	lsl r0, r0, #16
	lsr r4, r0, #16
_080AAEEA:
	ldr r2, _080AAEF4  @ =gUnknown_0200B270
	ldr r0, _080AAEF8  @ =gUnknown_0816E024
	lsl r1, r4, #1
	b _080AAFAE
	.byte 0x00
	.byte 0x00
_080AAEF4:
	.4byte gUnknown_0200B270
_080AAEF8:
	.4byte gUnknown_0816E024
_080AAEFC:
	ldr r1, _080AAF20  @ =gUnknown_0200B270
	mov r0, #11
	strh r0, [r1]
	add r1, r1, #64
	mov r0, #27
	strh r0, [r1]
	sub r1, r1, #62
	mov r0, #12
	strh r0, [r1]
	add r1, r1, #64
	mov r0, #28
	strh r0, [r1]
	sub r1, r1, #62
	mov r0, #13
	strh r0, [r1]
	add r1, r1, #64
	mov r0, #29
	b _080AB022
_080AAF20:
	.4byte gUnknown_0200B270
_080AAF24:
	cmp r4, #0
	bne _080AAF2E
	cmp r5, #0
	bne _080AAF2E
	b _080AB024
_080AAF2E:
	cmp r5, #0
	bne _080AAF38
	sub r0, r4, #1
	lsl r0, r0, #16
	lsr r4, r0, #16
_080AAF38:
	add r0, r6, #2
	asr r0, r0, #1
	lsl r0, r0, #1
	ldr r3, _080AAF60  @ =gUnknown_0200B270
	add r0, r0, r3
	ldr r1, _080AAF64  @ =gUnknown_0816E024
	lsl r2, r4, #1
	add r1, r2, r1
	ldrh r1, [r1]
	strh r1, [r0]
	add r0, r6, #0
	add r0, r0, #66
_080AAF50:
	asr r0, r0, #1
	lsl r0, r0, #1
	add r0, r0, r3
	ldr r1, _080AAF68  @ =gUnknown_0816E03A
	add r2, r2, r1
	ldrh r1, [r2]
	strh r1, [r0]
	b _080AB024
_080AAF60:
	.4byte gUnknown_0200B270
_080AAF64:
	.4byte gUnknown_0816E024
_080AAF68:
	.4byte gUnknown_0816E03A
_080AAF6C:
	cmp r5, #0
	beq _080AAF80
	ldr r2, _080AAF78  @ =gUnknown_0200B274
	ldr r0, _080AAF7C  @ =gUnknown_0816E024
	lsl r1, r4, #1
	b _080AAFAE
_080AAF78:
	.4byte gUnknown_0200B274
_080AAF7C:
	.4byte gUnknown_0816E024
_080AAF80:
	cmp r4, #0
	bne _080AAFA4
	ldr r1, _080AAF88  @ =gUnknown_0200B270
	b _080AAFCE
_080AAF88:
	.4byte gUnknown_0200B270
_080AAF8C:
	cmp r5, #0
	beq _080AAFA0
	ldr r2, _080AAF98  @ =gUnknown_0200B274
	ldr r0, _080AAF9C  @ =gUnknown_0816E024
	lsl r1, r4, #1
	b _080AAFAE
_080AAF98:
	.4byte gUnknown_0200B274
_080AAF9C:
	.4byte gUnknown_0816E024
_080AAFA0:
	cmp r4, #0
	beq _080AAFCC
_080AAFA4:
	sub r1, r4, #1
	lsl r1, r1, #16
	ldr r2, _080AAFC0  @ =gUnknown_0200B270
	ldr r0, _080AAFC4  @ =gUnknown_0816E024
	lsr r1, r1, #15
_080AAFAE:
	add r0, r1, r0
	ldrh r0, [r0]
	strh r0, [r2]
	add r2, r2, #64
	ldr r0, _080AAFC8  @ =gUnknown_0816E03A
	add r1, r1, r0
	ldrh r0, [r1]
	strh r0, [r2]
	b _080AB024
_080AAFC0:
	.4byte gUnknown_0200B270
_080AAFC4:
	.4byte gUnknown_0816E024
_080AAFC8:
	.4byte gUnknown_0816E03A
_080AAFCC:
	ldr r1, _080AAFE4  @ =gUnknown_0200B272
_080AAFCE:
	mov r0, #14
	strh r0, [r1]
	add r1, r1, #64
	mov r0, #30
	strh r0, [r1]
	ldr r0, _080AAFE8  @ =gUnknown_0200B274
	mov r1, #127
	strh r1, [r0]
	add r0, r0, #64
	strh r1, [r0]
	b _080AB024
_080AAFE4:
	.4byte gUnknown_0200B272
_080AAFE8:
	.4byte gUnknown_0200B274
_080AAFEC:
	lsr r1, r6, #1
	lsl r1, r1, #1
	ldr r3, _080AB034  @ =gUnknown_0200B270
	add r1, r1, r3
	ldr r0, _080AB038  @ =gUnknown_0816E024
	lsl r2, r4, #1
	add r0, r2, r0
	ldrh r0, [r0]
	strh r0, [r1]
	add r0, r6, #0
	add r0, r0, #64
	asr r0, r0, #1
	lsl r0, r0, #1
	add r0, r0, r3
	ldr r1, _080AB03C  @ =gUnknown_0816E03A
	add r2, r2, r1
	ldrh r1, [r2]
	strh r1, [r0]
	cmp r5, #0
	beq _080AB024
	ldr r1, _080AB040  @ =gUnknown_0200B274
	ldr r2, _080AB044  @ =0x0000010F
	add r0, r2, #0
	strh r0, [r1]
	add r1, r1, #64
	add r2, r2, #16
	add r0, r2, #0
_080AB022:
	strh r0, [r1]
_080AB024:
	ldr r0, _080AB048  @ =0x000009AE
	add r1, r7, r0
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
_080AB02E:
	pop {r4-r7}
	pop {r0}
	bx r0
_080AB034:
	.4byte gUnknown_0200B270
_080AB038:
	.4byte gUnknown_0816E024
_080AB03C:
	.4byte gUnknown_0816E03A
_080AB040:
	.4byte gUnknown_0200B274
_080AB044:
	.4byte 0x0000010F
_080AB048:
	.4byte 0x000009AE
	THUMB_FUNC_END sub_080AAC58

