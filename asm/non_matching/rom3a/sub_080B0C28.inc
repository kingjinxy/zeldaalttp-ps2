	THUMB_FUNC_START sub_080B0C28
sub_080B0C28: @ 0x080B0C28
	push {r4-r6,lr}
	ldr r1, _080B0D10  @ =gRam
	ldr r0, _080B0D14  @ =0x00000A42
	add r2, r1, r0
	ldr r3, _080B0D18  @ =0x00000A3E
	add r4, r1, r3
	ldrb r0, [r4]
	lsl r0, r0, #8
	ldrh r2, [r2]
	add r0, r0, r2
	ldr r5, _080B0D1C  @ =0x00001AB8
	add r2, r1, r5
	mov r3, #0
	strh r0, [r2]
	mov r0, #255
	strb r0, [r4]
	ldr r0, _080B0D20  @ =0x00000A3C
	add r2, r1, r0
	ldr r0, _080B0D24  @ =0x0000FFF1
	strh r0, [r2]
	ldr r2, _080B0D28  @ =0x0000188A
	add r0, r1, r2
	strb r3, [r0]
	ldr r5, _080B0D2C  @ =0x000017AE
	add r0, r1, r5
	strb r3, [r0]
	ldr r2, _080B0D30  @ =0x00001710
	add r0, r1, r2
	strb r3, [r0]
	ldr r3, _080B0D34  @ =0x00000CF8
	add r0, r1, r3
	ldrh r2, [r0]
	ldr r5, _080B0D38  @ =0x00001AB4
	add r0, r1, r5
	strh r2, [r0]
	ldr r2, _080B0D3C  @ =0x00000CFA
	add r0, r1, r2
	ldrh r0, [r0]
	ldr r3, _080B0D40  @ =0x00001AB6
	add r1, r1, r3
	strh r0, [r1]
	ldr r0, _080B0D44  @ =gUnknown_02000800
	ldr r1, _080B0D48  @ =gUnknown_02010540
	mov r2, #128
	lsl r2, r2, #2
	bl CpuSet
	mov r3, #0
	ldr r6, _080B0D4C  @ =gUnknown_02000840
	mov r2, #0
	ldr r5, _080B0D50  @ =gUnknown_02000880
	ldr r4, _080B0D54  @ =gUnknown_020008C0
_080B0C90:
	lsl r1, r3, #1
	add r0, r1, r6
	strh r2, [r0]
	add r0, r1, r5
	strh r2, [r0]
	add r1, r1, r4
	strh r2, [r1]
	add r0, r3, #1
	lsl r0, r0, #16
	lsr r3, r0, #16
	cmp r3, #32
	bne _080B0C90
	ldr r4, _080B0D10  @ =gRam
	ldr r5, _080B0D34  @ =0x00000CF8
	add r0, r4, r5
	mov r2, #0
	strh r2, [r0]
	ldr r1, _080B0D3C  @ =0x00000CFA
	add r0, r4, r1
	strh r2, [r0]
	ldr r5, _080B0D58  @ =0x00000A28
	add r0, r4, r5
	strh r2, [r0]
	ldr r1, _080B0D5C  @ =0x00000A2A
	add r0, r4, r1
	strh r2, [r0]
	sub r5, r5, #85
	add r0, r4, r5
	ldrb r1, [r0]
	ldr r5, _080B0D60  @ =0x00001ABC
	add r0, r4, r5
	strb r1, [r0]
	ldr r1, _080B0D64  @ =0x000009D4
	add r0, r4, r1
	ldrb r1, [r0]
	add r5, r5, #1
	add r0, r4, r5
	strb r1, [r0]
	ldr r1, _080B0D68  @ =0x00000A02
	add r0, r4, r1
	strb r3, [r0]
	ldr r3, _080B0D6C  @ =0x00000B48
	add r0, r4, r3
	strh r2, [r0]
	bl sub_080AAC58
	ldr r5, _080B0D70  @ =0x000009AE
	add r1, r4, r5
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	ldr r0, _080B0D18  @ =0x00000A3E
	add r1, r4, r0
	mov r0, #255
	strb r0, [r1]
	ldr r1, _080B0D74  @ =0x000009AD
	add r4, r4, r1
	ldrb r0, [r4]
	add r0, r0, #1
	strb r0, [r4]
	pop {r4-r6}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080B0D10:
	.4byte gRam
_080B0D14:
	.4byte 0x00000A42
_080B0D18:
	.4byte 0x00000A3E
_080B0D1C:
	.4byte 0x00001AB8
_080B0D20:
	.4byte 0x00000A3C
_080B0D24:
	.4byte 0x0000FFF1
_080B0D28:
	.4byte 0x0000188A
_080B0D2C:
	.4byte 0x000017AE
_080B0D30:
	.4byte 0x00001710
_080B0D34:
	.4byte 0x00000CF8
_080B0D38:
	.4byte 0x00001AB4
_080B0D3C:
	.4byte 0x00000CFA
_080B0D40:
	.4byte 0x00001AB6
_080B0D44:
	.4byte gUnknown_02000800
_080B0D48:
	.4byte gUnknown_02010540
_080B0D4C:
	.4byte gUnknown_02000840
_080B0D50:
	.4byte gUnknown_02000880
_080B0D54:
	.4byte gUnknown_020008C0
_080B0D58:
	.4byte 0x00000A28
_080B0D5C:
	.4byte 0x00000A2A
_080B0D60:
	.4byte 0x00001ABC
_080B0D64:
	.4byte 0x000009D4
_080B0D68:
	.4byte 0x00000A02
_080B0D6C:
	.4byte 0x00000B48
_080B0D70:
	.4byte 0x000009AE
_080B0D74:
	.4byte 0x000009AD
	THUMB_FUNC_END sub_080B0C28

