	THUMB_FUNC_START sub_080B4C64
sub_080B4C64: @ 0x080B4C64
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	ldr r1, _080B4CC0  @ =gRam
	ldr r2, _080B4CC4  @ =0x00000AB2
	add r0, r1, r2
	ldrh r0, [r0]
	lsr r5, r0, #1
	ldr r4, _080B4CC8  @ =gUnknown_0816F702
	lsl r0, r5, #1
	add r0, r0, r4
	ldrb r3, [r0]
	mov r0, #15
	ldr r6, _080B4CCC  @ =0x000009DE
	add r2, r1, r6
	and r0, r0, r3
	ldrb r2, [r2]
	add r0, r0, r2
	lsl r0, r0, #1
	ldr r3, _080B4CD0  @ =0x00000978
	add r2, r1, r3
	mov r3, #0
	strb r0, [r2]
	sub r6, r6, #126
	add r0, r1, r6
	strh r3, [r0]
	ldr r2, _080B4CD4  @ =0x00000964
	add r0, r1, r2
	strh r3, [r0]
	mov r3, #2
	add r6, r6, #122
	add r0, r1, r6
	ldrh r2, [r0]
	add r7, r1, #0
	ldr r1, _080B4CD8  @ =gUnknown_0816F010
	ldr r0, _080B4CDC  @ =gUnknown_0816F016
	add r0, r0, #4
	add r1, r1, #4
_080B4CB4:
	ldrh r4, [r1]
	cmp r2, r4
	bne _080B4CE0
	ldrh r2, [r0]
	b _080B4CEA
	.byte 0x00
	.byte 0x00
_080B4CC0:
	.4byte gRam
_080B4CC4:
	.4byte 0x00000AB2
_080B4CC8:
	.4byte gUnknown_0816F702
_080B4CCC:
	.4byte 0x000009DE
_080B4CD0:
	.4byte 0x00000978
_080B4CD4:
	.4byte 0x00000964
_080B4CD8:
	.4byte gUnknown_0816F010
_080B4CDC:
	.4byte gUnknown_0816F016
_080B4CE0:
	sub r0, r0, #2
	sub r1, r1, #2
	sub r3, r3, #1
	cmp r3, #0
	bge _080B4CB4
_080B4CEA:
	ldr r6, _080B4D44  @ =0x0000097C
	add r1, r7, r6
	strh r2, [r1]
	lsl r2, r5, #2
	ldr r3, _080B4D48  @ =gUnknown_0816FCF4
	add r0, r2, r3
	ldr r4, [r0]
	sub r6, r6, #4
	add r0, r7, r6
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #25
	lsl r0, r0, #1
	ldr r3, _080B4D4C  @ =gUnknown_0816FCE2
	add r0, r0, r3
	ldrh r3, [r0]
	add r0, r4, r3
	ldrb r6, [r0]
	add r3, r3, #1
	ldrb r0, [r1]
	lsl r5, r5, #1
	mov r8, r5
	mov r10, r2
	cmp r6, r0
	beq _080B4D64
	mov r5, #150
	lsl r5, r5, #4
	add r2, r7, r5
	ldr r6, _080B4D50  @ =0x00000964
	add r5, r7, r6
	mov r12, r0
	mov r0, #0
	mov r9, r0
_080B4D2C:
	ldrh r1, [r2]
	mov r6, #0
	ldrsh r0, [r2, r6]
	cmp r0, #63
	ble _080B4D54
	mov r0, r9
	strh r0, [r2]
	ldrh r0, [r5]
	add r0, r0, #16
	strh r0, [r5]
	b _080B4D5A
	.byte 0x00
	.byte 0x00
_080B4D44:
	.4byte 0x0000097C
_080B4D48:
	.4byte gUnknown_0816FCF4
_080B4D4C:
	.4byte gUnknown_0816FCE2
_080B4D50:
	.4byte 0x00000964
_080B4D54:
	add r0, r1, #0
	add r0, r0, #16
	strh r0, [r2]
_080B4D5A:
	add r0, r4, r3
	ldrb r6, [r0]
	add r3, r3, #1
	cmp r6, r12
	bne _080B4D2C
_080B4D64:
	mov r1, #150
	lsl r1, r1, #4
	add r0, r7, r1
	ldr r2, _080B4E18  @ =gUnknown_0816F00E
	ldrh r3, [r2]
	ldrh r0, [r0]
	add r3, r3, r0
	ldr r5, _080B4E1C  @ =0x00000A64
	add r4, r7, r5
	ldr r6, _080B4E20  @ =0x000016C4
	add r0, r7, r6
	ldrh r2, [r0]
	mov r1, #240
	lsl r1, r1, #1
	add r0, r1, #0
	and r0, r0, r2
	lsl r0, r0, #3
	sub r5, r5, #232
	add r2, r7, r5
	strh r0, [r2]
	ldrb r6, [r2]
	ldr r0, _080B4E24  @ =0x0000097D
	add r5, r7, r0
	ldrb r0, [r5]
	strb r0, [r2]
	strb r6, [r5]
	ldrh r0, [r2]
	add r3, r3, r0
	strh r3, [r4]
	ldr r3, _080B4E28  @ =0x00000964
	add r0, r7, r3
	ldrh r0, [r0]
	ldr r6, _080B4E2C  @ =0x00000EC8
	add r4, r7, r6
	strb r0, [r4]
	add r3, r3, #252
	add r0, r7, r3
	ldrh r0, [r0]
	lsr r0, r0, #1
	lsl r0, r0, #1
	ldr r6, _080B4E30  @ =gUnknown_0816F00A
	add r0, r0, r6
	ldrh r3, [r0]
	ldrb r4, [r4]
	add r3, r3, r4
	ldr r0, _080B4E34  @ =0x00000A66
	add r4, r7, r0
	mov r6, #182
	lsl r6, r6, #5
	add r0, r7, r6
	ldrh r0, [r0]
	and r1, r1, r0
	lsl r1, r1, #3
	strh r1, [r2]
	ldrb r6, [r2]
	ldrb r0, [r5]
	strb r0, [r2]
	strb r6, [r5]
	ldrh r0, [r2]
	add r3, r3, r0
	strh r3, [r4]
	ldr r0, _080B4E38  @ =gUnknown_0816F702
	add r0, r0, r8
	ldrh r1, [r0]
	mov r0, #15
	and r0, r0, r1
	ldr r1, _080B4E3C  @ =gUnknown_0816F03C
	add r1, r1, r8
	mov r2, #0
	ldrsh r1, [r1, r2]
	add r3, r0, r1
	ldr r0, _080B4E40  @ =gUnknown_0816FCF4
	add r0, r0, r10
	ldr r4, [r0]
	lsl r0, r3, #1
	ldr r3, _080B4E44  @ =gUnknown_0816FCE2
	add r0, r0, r3
	ldrh r0, [r0]
	add r4, r4, r0
	ldr r5, _080B4E48  @ =0x000015E8
	add r0, r7, r5
	mov r1, #64
	strh r1, [r0]
	ldr r6, _080B4E4C  @ =0x000015EC
	add r0, r7, r6
	strh r1, [r0]
	mov r3, #24
	ldrb r1, [r4, #24]
	b _080B4E78
	.byte 0x00
	.byte 0x00
_080B4E18:
	.4byte gUnknown_0816F00E
_080B4E1C:
	.4byte 0x00000A64
_080B4E20:
	.4byte 0x000016C4
_080B4E24:
	.4byte 0x0000097D
_080B4E28:
	.4byte 0x00000964
_080B4E2C:
	.4byte 0x00000EC8
_080B4E30:
	.4byte gUnknown_0816F00A
_080B4E34:
	.4byte 0x00000A66
_080B4E38:
	.4byte gUnknown_0816F702
_080B4E3C:
	.4byte gUnknown_0816F03C
_080B4E40:
	.4byte gUnknown_0816FCF4
_080B4E44:
	.4byte gUnknown_0816FCE2
_080B4E48:
	.4byte 0x000015E8
_080B4E4C:
	.4byte 0x000015EC
_080B4E50:
	ldr r0, _080B4EE0  @ =0x000015E8
	add r1, r7, r0
	ldrh r0, [r1]
	sub r0, r0, #16
	strh r0, [r1]
	lsl r0, r0, #16
	cmp r0, #0
	bge _080B4E6E
	mov r0, #64
	strh r0, [r1]
	ldr r2, _080B4EE4  @ =0x000015EC
	add r1, r7, r2
	ldrh r0, [r1]
	sub r0, r0, #16
	strh r0, [r1]
_080B4E6E:
	sub r3, r3, #1
	cmp r3, #0
	blt _080B4E86
	add r0, r4, r3
	ldrb r1, [r0]
_080B4E78:
	cmp r1, #15
	beq _080B4E50
	ldr r0, _080B4EE8  @ =gUnknown_0816F020
	add r0, r0, r8
	ldrb r0, [r0]
	cmp r1, r0
	bne _080B4E50
_080B4E86:
	ldr r4, _080B4EEC  @ =0x00000964
	add r3, r7, r4
	mov r1, #0
	strb r1, [r3]
	ldr r5, _080B4EF0  @ =0x0000097D
	add r0, r7, r5
	strb r1, [r0]
	ldr r6, _080B4EF4  @ =0x00000A5C
	add r0, r7, r6
	ldrb r1, [r0]
	ldr r0, _080B4EF8  @ =gUnknown_0816F03C
	add r0, r0, r8
	ldrb r0, [r0]
	sub r1, r1, r0
	ldr r0, _080B4EFC  @ =0x0000097C
	add r2, r7, r0
	strb r1, [r2]
	lsl r0, r1, #24
	cmp r0, #0
	bge _080B4EB8
	mvn r0, r1
	add r0, r0, #1
	strb r0, [r2]
	mov r0, #2
	strb r0, [r3]
_080B4EB8:
	ldrb r0, [r3]
	lsl r0, r0, #24
	asr r3, r0, #25
	add r4, r2, #0
	ldr r1, _080B4EE4  @ =0x000015EC
	add r2, r7, r1
	ldr r1, _080B4F00  @ =gUnknown_0816F01C
	lsl r0, r3, #1
	add r1, r0, r1
_080B4ECA:
	ldrb r0, [r4]
	sub r0, r0, #1
	strb r0, [r4]
	lsl r0, r0, #24
	cmp r0, #0
	blt _080B4F04
	ldrh r0, [r1]
	ldrh r3, [r2]
	add r0, r0, r3
	strh r0, [r2]
	b _080B4ECA
_080B4EE0:
	.4byte 0x000015E8
_080B4EE4:
	.4byte 0x000015EC
_080B4EE8:
	.4byte gUnknown_0816F020
_080B4EEC:
	.4byte 0x00000964
_080B4EF0:
	.4byte 0x0000097D
_080B4EF4:
	.4byte 0x00000A5C
_080B4EF8:
	.4byte gUnknown_0816F03C
_080B4EFC:
	.4byte 0x0000097C
_080B4F00:
	.4byte gUnknown_0816F01C
_080B4F04:
	ldr r4, _080B4F34  @ =0x000015EC
	add r1, r7, r4
	ldr r5, _080B4F38  @ =gUnknown_0816F00A
	ldrh r0, [r5]
	ldrh r6, [r1]
	add r0, r0, r6
	mov r2, #0
	strh r0, [r1]
	ldr r0, _080B4F3C  @ =0x00000A4C
	add r1, r7, r0
	ldrh r0, [r1]
	add r0, r0, #1
	strh r0, [r1]
	ldr r1, _080B4F40  @ =0x00000A5A
	add r0, r7, r1
	strb r2, [r0]
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080B4F34:
	.4byte 0x000015EC
_080B4F38:
	.4byte gUnknown_0816F00A
_080B4F3C:
	.4byte 0x00000A4C
_080B4F40:
	.4byte 0x00000A5A
	THUMB_FUNC_END sub_080B4C64

