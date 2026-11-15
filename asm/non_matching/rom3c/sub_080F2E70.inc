	THUMB_FUNC_START sub_080F2E70
sub_080F2E70: @ 0x080F2E70
	push {r4-r7,lr}
	mov r7, r9
	mov r6, r8
	push {r6,r7}
	lsl r0, r0, #24
	lsr r4, r0, #24
	add r7, r4, #0
	ldr r5, _080F2F0C  @ =gRam
	ldr r1, _080F2F10  @ =0x000009DA
	add r0, r5, r1
	ldrb r0, [r0]
	cmp r0, #18
	beq _080F2E8C
	b _080F300C
_080F2E8C:
	add r0, r4, #0
	bl sub_080F3680
	ldr r2, _080F2F14  @ =0x0000165E
	add r0, r5, r2
	ldrb r0, [r0]
	cmp r0, #2
	bls _080F2EA8
	ldr r0, _080F2F18  @ =0x0000165F
	add r2, r5, r0
	ldrb r1, [r2]
	mov r0, #2
	orr r0, r0, r1
	strb r0, [r2]
_080F2EA8:
	ldr r1, _080F2F18  @ =0x0000165F
	add r6, r5, r1
	ldrb r1, [r6]
	mov r0, #2
	and r0, r0, r1
	lsl r0, r0, #24
	lsr r3, r0, #24
	cmp r3, #0
	beq _080F2EBC
	b _080F304E
_080F2EBC:
	ldr r2, _080F2F1C  @ =0x00001062
	add r0, r5, r2
	add r0, r4, r0
	mov r1, #1
	strb r1, [r0]
	ldr r0, _080F2F20  @ =0x00001012
	add r2, r5, r0
	add r2, r4, r2
	ldrb r1, [r2]
	mov r0, #240
	and r0, r0, r1
	mov r1, #2
	orr r0, r0, r1
	strb r0, [r2]
	ldr r0, _080F2F24  @ =gSword
	ldrb r0, [r0]
	cmp r0, #1
	bhi _080F2F58
	add r0, r4, #0
	bl sub_080C2FA8
	mov r1, #3
	eor r0, r0, r1
	lsl r0, r0, #24
	lsr r0, r0, #24
	ldr r2, _080F2F28  @ =0x00001082
	add r1, r5, r2
	add r1, r4, r1
	strb r0, [r1]
	sub r2, r2, #208
	add r1, r5, r2
	add r1, r4, r1
	strb r0, [r1]
	ldr r1, _080F2F2C  @ =0x00001663
	add r0, r5, r1
	ldrb r0, [r0]
	cmp r0, #1
	beq _080F2F30
	mov r0, #2
	b _080F2F6C
_080F2F0C:
	.4byte gRam
_080F2F10:
	.4byte 0x000009DA
_080F2F14:
	.4byte 0x0000165E
_080F2F18:
	.4byte 0x0000165F
_080F2F1C:
	.4byte 0x00001062
_080F2F20:
	.4byte 0x00001012
_080F2F24:
	.4byte gSword
_080F2F28:
	.4byte 0x00001082
_080F2F2C:
	.4byte 0x00001663
_080F2F30:
	ldrb r0, [r6]
	mov r1, #4
	orr r0, r0, r1
	strb r0, [r6]
	ldr r2, _080F2F50  @ =gUnknown_0200229B
	ldrb r0, [r2]
	mov r1, #32
	orr r0, r0, r1
	strb r0, [r2]
	ldr r2, _080F2F54  @ =0x00000FC2
	add r0, r5, r2
	add r0, r4, r0
	mov r1, #170
	strb r1, [r0]
	mov r0, #1
	b _080F2F6C
_080F2F50:
	.4byte gUnknown_0200229B
_080F2F54:
	.4byte 0x00000FC2
_080F2F58:
	ldr r1, _080F2FDC  @ =0x00000FB2
	add r0, r5, r1
	add r0, r4, r0
	mov r1, #4
	strb r1, [r0]
	ldr r2, _080F2FE0  @ =0x00000F92
	add r0, r5, r2
	add r0, r4, r0
	strb r3, [r0]
	mov r0, #0
_080F2F6C:
	ldr r4, _080F2FE4  @ =gRam
	ldr r1, _080F2FE8  @ =0x00001052
	add r3, r4, r1
	add r3, r7, r3
	mov r2, #0
	mov r9, r2
	strb r0, [r3]
	ldr r1, _080F2FEC  @ =gUnknown_08179288
	ldr r0, _080F2FF0  @ =0x00000EE2
	add r0, r0, r4
	mov r8, r0
	add r8, r8, r7
	mov r2, r8
	ldrb r0, [r2]
	ldrh r2, [r1]
	add r2, r2, r0
	ldr r0, _080F2FF4  @ =0x00000F02
	add r6, r4, r0
	add r6, r7, r6
	ldrb r0, [r6]
	lsl r0, r0, #8
	add r2, r2, r0
	ldr r1, _080F2FF8  @ =gUnknown_0817928E
	ldrb r0, [r3]
	lsl r0, r0, #1
	add r0, r0, r1
	ldr r1, _080F2FFC  @ =0x00000ED2
	add r5, r4, r1
	add r5, r7, r5
	ldrb r3, [r5]
	ldrh r1, [r0]
	add r1, r1, r3
	ldr r0, _080F3000  @ =0x00000EF2
	add r3, r4, r0
	add r3, r7, r3
	ldrb r0, [r3]
	lsl r0, r0, #8
	add r1, r1, r0
	mov r0, r8
	strb r2, [r0]
	lsr r2, r2, #8
	strb r2, [r6]
	strb r1, [r5]
	lsr r1, r1, #8
	strb r1, [r3]
	ldr r1, _080F3004  @ =0x00001172
	add r4, r4, r1
	add r4, r7, r4
	ldrb r0, [r4]
	add r0, r0, #1
	strb r0, [r4]
	ldr r0, _080F3008  @ =gUnknown_0200EE19
	mov r2, r9
	strb r2, [r0]
	b _080F3070
	.byte 0x00
	.byte 0x00
_080F2FDC:
	.4byte 0x00000FB2
_080F2FE0:
	.4byte 0x00000F92
_080F2FE4:
	.4byte gRam
_080F2FE8:
	.4byte 0x00001052
_080F2FEC:
	.4byte gUnknown_08179288
_080F2FF0:
	.4byte 0x00000EE2
_080F2FF4:
	.4byte 0x00000F02
_080F2FF8:
	.4byte gUnknown_0817928E
_080F2FFC:
	.4byte 0x00000ED2
_080F3000:
	.4byte 0x00000EF2
_080F3004:
	.4byte 0x00001172
_080F3008:
	.4byte gUnknown_0200EE19
_080F300C:
	cmp r0, #4
	beq _080F3040
	ldr r2, _080F3034  @ =0x0000165F
	add r0, r5, r2
	ldrb r1, [r0]
	mov r2, #1
	add r0, r2, #0
	and r0, r0, r1
	cmp r0, #0
	bne _080F304E
	ldr r1, _080F3038  @ =0x00000FB2
	add r0, r5, r1
	add r0, r4, r0
	mov r1, #3
	strb r1, [r0]
	ldr r1, _080F303C  @ =0x00001052
	add r0, r5, r1
	add r0, r4, r0
	strb r2, [r0]
	b _080F3070
_080F3034:
	.4byte 0x0000165F
_080F3038:
	.4byte 0x00000FB2
_080F303C:
	.4byte 0x00001052
_080F3040:
	ldr r2, _080F305C  @ =0x0000165F
	add r0, r5, r2
	ldrb r1, [r0]
	mov r0, #16
	and r0, r0, r1
	cmp r0, #0
	beq _080F3064
_080F304E:
	ldr r1, _080F3060  @ =0x00000FA2
	add r0, r5, r1
	add r0, r4, r0
	mov r1, #0
	strb r1, [r0]
	b _080F3070
	.byte 0x00
	.byte 0x00
_080F305C:
	.4byte 0x0000165F
_080F3060:
	.4byte 0x00000FA2
_080F3064:
	ldr r2, _080F307C  @ =0x00000EE2
	add r1, r5, r2
	add r1, r7, r1
	ldrb r0, [r1]
	add r0, r0, #8
	strb r0, [r1]
_080F3070:
	pop {r3,r4}
	mov r8, r3
	mov r9, r4
	pop {r4-r7}
	pop {r0}
	bx r0
_080F307C:
	.4byte 0x00000EE2
	THUMB_FUNC_END sub_080F2E70

