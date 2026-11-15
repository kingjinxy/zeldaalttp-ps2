	THUMB_FUNC_START sub_08106528
sub_08106528: @ 0x08106528
	push {r4-r7,lr}
	mov r7, r8
	push {r7}
	lsl r0, r0, #24
	lsr r6, r0, #24
	mov r8, r6
	ldr r7, _08106624  @ =gRam
	ldr r1, _08106628  @ =0x00000FF2
	add r0, r7, r1
	add r0, r6, r0
	ldrb r1, [r0]
	add r1, r1, #52
	lsl r1, r1, #24
	lsr r1, r1, #24
	ldr r2, _0810662C  @ =0x00000F62
	add r4, r7, r2
	ldrb r3, [r4]
	ldr r0, _08106630  @ =0x00000F72
	add r5, r7, r0
	ldrb r2, [r5]
	lsl r2, r2, #8
	ldr r0, _08106634  @ =gUnknown_0817BF10
	add r0, r1, r0
	orr r3, r3, r2
	ldrb r0, [r0]
	add r3, r3, r0
	ldr r0, _08106638  @ =gUnknown_0817BF12
	add r1, r1, r0
	ldrb r0, [r1]
	lsl r0, r0, #8
	add r3, r3, r0
	add r4, r6, r4
	strb r3, [r4]
	add r5, r6, r5
	lsr r3, r3, #8
	strb r3, [r5]
	ldr r1, _0810663C  @ =0x00000F82
	add r2, r7, r1
	ldrb r1, [r2]
	ldr r0, _08106640  @ =0x000010A2
	add r3, r7, r0
	ldrb r0, [r3]
	lsl r0, r0, #8
	add r1, r1, r0
	sub r1, r1, #32
	add r2, r6, r2
	strb r1, [r2]
	add r3, r6, r3
	lsr r1, r1, #8
	strb r1, [r3]
	ldr r2, _08106644  @ =0x00000D94
	add r1, r7, r2
	add r1, r6, r1
	ldrb r2, [r1]
	mov r0, #48
	orr r0, r0, r2
	strb r0, [r1]
	add r0, r6, #0
	bl sub_08106AF0
	add r0, r6, #0
	bl Sprite3_CheckIfActive
	lsl r0, r0, #24
	cmp r0, #0
	bne _08106672
	ldr r1, _08106648  @ =0x00000F52
	add r0, r7, r1
	add r4, r6, r0
	ldrb r1, [r4]
	mov r5, #128
	add r0, r5, #0
	and r0, r0, r1
	lsl r0, r0, #24
	lsr r3, r0, #24
	cmp r3, #0
	bne _08106664
	ldr r2, _0810664C  @ =0x000010C2
	add r0, r7, r2
	add r2, r6, r0
	ldrb r0, [r2]
	cmp r0, #0
	beq _081065F4
	cmp r1, #4
	beq _081065F4
	strb r3, [r2]
	ldr r1, _08106650  @ =0x00000FC2
	add r0, r7, r1
	add r0, r6, r0
	strb r5, [r0]
	mov r0, #4
	strb r0, [r4]
	ldr r0, _08106654  @ =0x00001152
	add r2, r7, r0
	add r2, r6, r2
	ldr r1, _08106658  @ =0x00001122
	add r0, r7, r1
	add r0, r6, r0
	ldrb r1, [r0]
	strb r1, [r2]
	mov r1, #3
	strb r1, [r0]
_081065F4:
	mov r0, r8
	bl sub_080C5044
	ldr r2, _08106624  @ =gRam
	ldr r0, _0810665C  @ =0x00000E75
	add r1, r2, r0
	add r1, r1, r8
	ldrb r3, [r1]
	mov r0, #4
	orr r0, r0, r3
	strb r0, [r1]
	ldr r1, _08106660  @ =gUnknown_0817BF14
	ldr r0, _08106648  @ =0x00000F52
	add r2, r2, r0
	add r2, r2, r8
	ldrb r0, [r2]
	lsl r0, r0, #2
	add r0, r0, r1
	ldr r1, [r0]
	mov r0, r8
	bl _call_via_r1
	b _08106672
	.byte 0x00
	.byte 0x00
_08106624:
	.4byte gRam
_08106628:
	.4byte 0x00000FF2
_0810662C:
	.4byte 0x00000F62
_08106630:
	.4byte 0x00000F72
_08106634:
	.4byte gUnknown_0817BF10
_08106638:
	.4byte gUnknown_0817BF12
_0810663C:
	.4byte 0x00000F82
_08106640:
	.4byte 0x000010A2
_08106644:
	.4byte 0x00000D94
_08106648:
	.4byte 0x00000F52
_0810664C:
	.4byte 0x000010C2
_08106650:
	.4byte 0x00000FC2
_08106654:
	.4byte 0x00001152
_08106658:
	.4byte 0x00001122
_0810665C:
	.4byte 0x00000E75
_08106660:
	.4byte gUnknown_0817BF14
_08106664:
	ldr r2, _0810667C  @ =0x00001172
	add r0, r7, r2
	add r0, r0, r8
	strb r1, [r0]
	mov r0, r8
	bl sub_08106A78
_08106672:
	pop {r3}
	mov r8, r3
	pop {r4-r7}
	pop {r0}
	bx r0
_0810667C:
	.4byte 0x00001172
	THUMB_FUNC_END sub_08106528

