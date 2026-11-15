	THUMB_FUNC_START sub_0810A0B4
sub_0810A0B4: @ 0x0810A0B4
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	sub sp, sp, #4
	ldr r1, _0810A1A0  @ =gRam
	ldr r0, _0810A1A4  @ =0x00000D16
	add r2, r1, r0
	ldr r3, _0810A1A8  @ =0x0000FFFC
	add r0, r3, #0
	ldrh r4, [r2]
	add r0, r0, r4
	mov r3, #0
	strh r0, [r2]
	ldr r4, _0810A1AC  @ =0x000015F9
	add r0, r1, r4
	strb r3, [r0]
	add r6, r1, #0
	add r7, r6, #0
	mov r8, r0
	mov r0, #128
	mov r12, r0
	ldr r1, _0810A1B0  @ =gUnknown_08173F38
	mov r9, r1
	mov r2, #255
	mov r10, r2
_0810A0EA:
	mov r3, r8
	ldrb r1, [r3]
	add r0, r1, #1
	lsl r0, r0, #24
	lsr r5, r0, #24
	lsl r1, r1, #25
	lsr r1, r1, #24
	ldr r4, _0810A1B4  @ =gUnknown_0817C874
	add r1, r1, r4
	ldrh r0, [r1]
	ldr r1, _0810A1B8  @ =gUnknown_03002F46
	ldrh r1, [r1]
	add r0, r0, r1
	ldr r2, _0810A1BC  @ =0x000001FF
	add r1, r2, #0
	and r0, r0, r1
	ldr r3, _0810A1C0  @ =gUnknown_03002B90
	strh r0, [r3]
	lsr r4, r0, #5
	ldr r1, _0810A1C4  @ =0x00000F52
	add r0, r7, r1
	add r0, r5, r0
	ldrb r0, [r0]
	cmp r0, #2
	beq _0810A156
	sub r4, r4, #4
	mov r0, #15
	and r4, r4, r0
	ldr r2, _0810A1C8  @ =0x00000F22
	add r3, r6, r2
	add r3, r5, r3
	ldr r1, _0810A1CC  @ =gUnknown_0817C884
	add r0, r4, r1
	ldrb r2, [r0]
	lsr r1, r2, #1
	mov r0, #127
	and r1, r1, r0
	mov r0, r12
	and r0, r0, r2
	add r1, r1, r0
	strb r1, [r3]
	ldr r1, _0810A1D0  @ =0x00000F12
	add r3, r6, r1
	add r3, r5, r3
	ldr r2, _0810A1D4  @ =gUnknown_0817C894
	add r4, r4, r2
	ldrb r2, [r4]
	lsr r1, r2, #1
	mov r4, #127
	and r1, r1, r4
	mov r0, r12
	and r0, r0, r2
	add r1, r1, r0
	strb r1, [r3]
_0810A156:
	ldr r1, _0810A1D8  @ =0x00000D18
	add r0, r7, r1
	ldrb r0, [r0]
	ldr r3, _0810A1DC  @ =0x0000097D
	add r2, r7, r3
	strb r0, [r2]
	ldr r4, _0810A1C0  @ =gUnknown_03002B90
	ldrh r1, [r4]
	mov r0, r10
	and r0, r0, r1
	lsl r0, r0, #1
	add r0, r0, r9
	ldrh r0, [r0]
	ldr r4, _0810A1E0  @ =0x00000968
	add r3, r7, r4
	strh r0, [r3]
	add r1, r1, #128
	sub r4, r4, #4
	add r0, r7, r4
	strh r1, [r0]
	mov r0, r10
	and r1, r1, r0
	lsl r1, r1, #1
	add r1, r1, r9
	ldrh r1, [r1]
	add r4, r4, #8
	add r0, r7, r4
	strh r1, [r0]
	ldr r1, _0810A1E4  @ =0x00000969
	add r0, r7, r1
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	cmp r0, #0
	beq _0810A1E8
	ldrb r2, [r2]
	b _0810A1FE
_0810A1A0:
	.4byte gRam
_0810A1A4:
	.4byte 0x00000D16
_0810A1A8:
	.4byte 0x0000FFFC
_0810A1AC:
	.4byte 0x000015F9
_0810A1B0:
	.4byte gUnknown_08173F38
_0810A1B4:
	.4byte gUnknown_0817C874
_0810A1B8:
	.4byte gUnknown_03002F46
_0810A1BC:
	.4byte 0x000001FF
_0810A1C0:
	.4byte gUnknown_03002B90
_0810A1C4:
	.4byte 0x00000F52
_0810A1C8:
	.4byte 0x00000F22
_0810A1CC:
	.4byte gUnknown_0817C884
_0810A1D0:
	.4byte 0x00000F12
_0810A1D4:
	.4byte gUnknown_0817C894
_0810A1D8:
	.4byte 0x00000D18
_0810A1DC:
	.4byte 0x0000097D
_0810A1E0:
	.4byte 0x00000968
_0810A1E4:
	.4byte 0x00000969
_0810A1E8:
	ldrb r1, [r3]
	ldrb r0, [r2]
	mul r0, r1, r0
	lsl r0, r0, #16
	lsr r2, r0, #24
	lsr r0, r0, #23
	mov r1, #1
	and r0, r0, r1
	add r2, r2, r0
	lsl r2, r2, #24
	lsr r2, r2, #24
_0810A1FE:
	ldr r3, _0810A270  @ =0x00000961
	add r0, r6, r3
	ldrb r1, [r0]
	mov r4, #1
	add r0, r4, #0
	and r0, r0, r1
	cmp r0, #0
	beq _0810A216
	mvn r0, r2
	add r0, r0, #1
	lsl r0, r0, #24
	lsr r2, r0, #24
_0810A216:
	ldr r0, _0810A274  @ =0x00000974
	add r3, r6, r0
	mov r0, #0
	strb r0, [r3]
	add r0, r2, #0
	mov r1, r12
	and r0, r0, r1
	cmp r0, #0
	beq _0810A22E
	mov r0, #1
	neg r0, r0
	strb r0, [r3]
_0810A22E:
	ldr r1, _0810A278  @ =0x00000EE2
	add r0, r6, r1
	ldrb r0, [r0]
	str r0, [sp]
	add r1, r1, #32
	add r0, r6, r1
	ldrb r0, [r0]
	lsl r0, r0, #8
	ldr r1, [sp]
	add r0, r1, r0
	add r1, r0, r2
	mov r0, #0
	ldrsb r0, [r3, r0]
	lsl r0, r0, #8
	add r1, r1, r0
	ldr r2, _0810A27C  @ =gUnknown_02003040
	add r0, r5, r2
	strb r1, [r0]
	ldr r3, _0810A280  @ =gUnknown_02003050
	add r0, r5, r3
	lsr r1, r1, #8
	strb r1, [r0]
	ldr r1, _0810A284  @ =0x0000096D
	add r0, r6, r1
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	cmp r0, #0
	beq _0810A28C
	ldr r3, _0810A288  @ =gUnknown_03002BAD
	ldrb r2, [r3]
	b _0810A2A6
	.byte 0x00
	.byte 0x00
_0810A270:
	.4byte 0x00000961
_0810A274:
	.4byte 0x00000974
_0810A278:
	.4byte 0x00000EE2
_0810A27C:
	.4byte gUnknown_02003040
_0810A280:
	.4byte gUnknown_02003050
_0810A284:
	.4byte 0x0000096D
_0810A288:
	.4byte gUnknown_03002BAD
_0810A28C:
	ldr r1, _0810A320  @ =0x0000096C
	add r0, r6, r1
	ldrb r1, [r0]
	ldr r2, _0810A324  @ =gUnknown_03002BAD
	ldrb r0, [r2]
	mul r0, r1, r0
	lsl r0, r0, #16
	lsr r1, r0, #24
	lsr r0, r0, #23
	and r0, r0, r4
	add r1, r1, r0
	lsl r1, r1, #24
	lsr r2, r1, #24
_0810A2A6:
	add r3, r6, #0
	ldr r4, _0810A328  @ =0x00000965
	add r0, r3, r4
	ldrb r1, [r0]
	mov r0, #1
	and r0, r0, r1
	cmp r0, #0
	beq _0810A2BE
	mvn r0, r2
	add r0, r0, #1
	lsl r0, r0, #24
	lsr r2, r0, #24
_0810A2BE:
	ldr r0, _0810A32C  @ =0x00000974
	add r3, r3, r0
	mov r0, #0
	strb r0, [r3]
	add r0, r2, #0
	mov r1, r12
	and r0, r0, r1
	cmp r0, #0
	beq _0810A2D6
	mov r0, #1
	neg r0, r0
	strb r0, [r3]
_0810A2D6:
	ldr r4, _0810A330  @ =0x00000ED2
	add r0, r6, r4
	ldrb r1, [r0]
	add r4, r4, #32
	add r0, r6, r4
	ldrb r0, [r0]
	lsl r0, r0, #8
	add r1, r1, r0
	add r1, r1, r2
	mov r0, #0
	ldrsb r0, [r3, r0]
	lsl r0, r0, #8
	add r1, r1, r0
	ldr r2, _0810A334  @ =gUnknown_02003060
	add r0, r5, r2
	strb r1, [r0]
	ldr r3, _0810A338  @ =gUnknown_02003070
	add r0, r5, r3
	lsr r1, r1, #8
	strb r1, [r0]
	mov r4, r8
	ldrb r0, [r4]
	add r0, r0, #1
	strb r0, [r4]
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #8
	beq _0810A310
	b _0810A0EA
_0810A310:
	add sp, sp, #4
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r0}
	bx r0
_0810A320:
	.4byte 0x0000096C
_0810A324:
	.4byte gUnknown_03002BAD
_0810A328:
	.4byte 0x00000965
_0810A32C:
	.4byte 0x00000974
_0810A330:
	.4byte 0x00000ED2
_0810A334:
	.4byte gUnknown_02003060
_0810A338:
	.4byte gUnknown_02003070
	THUMB_FUNC_END sub_0810A0B4

