	THUMB_FUNC_START sub_080C2534
sub_080C2534: @ 0x080C2534
	push {r4-r7,lr}
	sub sp, sp, #4
	lsl r0, r0, #24
	lsr r5, r0, #24
	ldr r0, _080C25B4  @ =gRam
	ldr r1, _080C25B8  @ =0x000009B2
	add r0, r0, r1
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	cmp r0, #0
	bne _080C2558
	bl GetRandomInt
	mov r1, #8
	and r1, r1, r0
	cmp r1, #0
	bne _080C25B0
_080C2558:
	ldr r6, _080C25B4  @ =gRam
	ldr r2, _080C25BC  @ =0x00000DB8
	add r0, r6, r2
	ldrb r4, [r0]
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	cmp r0, #0
	beq _080C25B0
	cmp r0, #4
	bne _080C2582
	bl GetRandomInt
	lsl r0, r0, #24
	mov r1, #192
	lsl r1, r1, #18
	and r1, r1, r0
	mov r3, #152
	lsl r3, r3, #21
	add r1, r1, r3
	lsr r4, r1, #24
_080C2582:
	lsl r0, r4, #24
	lsr r7, r0, #24
	ldr r1, _080C25C0  @ =gUnknown_08171DCB
	asr r0, r0, #24
	sub r0, r0, #1
	add r0, r0, r1
	ldrb r0, [r0]
	cmp r0, #0
	beq _080C25B0
	bl sub_080C382C
	lsl r0, r0, #24
	lsr r0, r0, #24
	add r1, r5, #0
	bl sub_080CA538
	lsl r0, r0, #24
	lsr r4, r0, #24
	lsl r0, r4, #24
	mov r12, r0
	asr r5, r0, #24
	cmp r5, #0
	bge _080C25C4
_080C25B0:
	mov r0, #0
	b _080C2760
_080C25B4:
	.4byte gRam
_080C25B8:
	.4byte 0x000009B2
_080C25BC:
	.4byte 0x00000DB8
_080C25C0:
	.4byte gUnknown_08171DCB
_080C25C4:
	ldr r2, _080C26BC  @ =0x00000F52
	add r1, r6, r2
	add r1, r5, r1
	ldr r0, _080C26C0  @ =gUnknown_08171DE1
	sub r3, r7, #1
	add r0, r3, r0
	ldrb r0, [r0]
	mov r7, #0
	strb r0, [r1]
	ldr r0, _080C26C4  @ =0x00001172
	add r1, r6, r0
	add r1, r5, r1
	ldr r0, _080C26C8  @ =gUnknown_08171E0D
	add r0, r3, r0
	ldrb r0, [r0]
	strb r0, [r1]
	ldr r2, _080C26CC  @ =0x00001152
	add r1, r6, r2
	add r1, r5, r1
	ldr r0, _080C26D0  @ =gUnknown_08171E23
	add r0, r3, r0
	ldrb r0, [r0]
	strb r0, [r1]
	mov r1, #150
	lsl r1, r1, #4
	add r0, r6, r1
	ldrb r1, [r0]
	ldr r2, _080C26D4  @ =0x00000961
	add r0, r6, r2
	ldrb r0, [r0]
	lsl r0, r0, #8
	ldr r2, _080C26D8  @ =gUnknown_08171DF7
	add r3, r3, r2
	orr r1, r1, r0
	ldrb r3, [r3]
	add r1, r1, r3
	lsl r1, r1, #16
	lsr r1, r1, #16
	ldr r3, _080C26DC  @ =0x00000EE2
	add r0, r6, r3
	add r0, r5, r0
	strb r1, [r0]
	ldr r2, _080C26E0  @ =0x00000F02
	add r0, r6, r2
	add r0, r5, r0
	lsr r1, r1, #8
	strb r1, [r0]
	sub r3, r3, #16
	add r0, r6, r3
	add r0, r5, r0
	ldr r2, _080C26E4  @ =0x00000964
	add r1, r6, r2
	ldrb r1, [r1]
	strb r1, [r0]
	add r3, r3, #32
	add r0, r6, r3
	add r0, r5, r0
	add r2, r2, #1
	add r1, r6, r2
	ldrb r1, [r1]
	strb r1, [r0]
	ldr r3, _080C26E8  @ =0x00001142
	add r0, r6, r3
	add r0, r5, r0
	add r2, r2, #3
	add r1, r6, r2
	ldrb r1, [r1]
	strb r1, [r0]
	ldr r3, _080C26EC  @ =0x00000F92
	add r0, r6, r3
	add r0, r5, r0
	strb r7, [r0]
	ldr r1, _080C26F0  @ =0x000010E2
	add r0, r6, r1
	add r0, r5, r0
	mov r1, #32
	strb r1, [r0]
	ldr r2, _080C26F4  @ =0x00000FE2
	add r0, r6, r2
	add r0, r5, r0
	mov r1, #48
	strb r1, [r0]
	add r3, r3, #96
	add r0, r6, r3
	add r0, r5, r0
	ldrb r7, [r0]
	cmp r7, #228
	bne _080C267C
	mov r1, r12
	lsr r0, r1, #24
	bl sub_080CFFFC
_080C267C:
	cmp r7, #11
	bne _080C269A
	mov r0, #98
	mov r1, #0
	bl sub_0812A324
	ldr r2, _080C26F8  @ =0x00000B36
	add r0, r6, r2
	ldrh r1, [r0]
	cmp r1, #1
	bne _080C269A
	ldr r3, _080C26FC  @ =0x00001002
	add r0, r6, r3
	add r0, r5, r0
	strb r1, [r0]
_080C269A:
	add r0, r7, #0
	sub r0, r0, #65
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #1
	bls _080C2708
	cmp r7, #62
	bne _080C273C
	ldr r0, _080C2700  @ =gRam
	lsl r1, r4, #24
	asr r1, r1, #24
	ldr r2, _080C2704  @ =0x00001122
	add r0, r0, r2
	add r1, r1, r0
	mov r0, #9
	b _080C275C
	.byte 0x00
	.byte 0x00
_080C26BC:
	.4byte 0x00000F52
_080C26C0:
	.4byte gUnknown_08171DE1
_080C26C4:
	.4byte 0x00001172
_080C26C8:
	.4byte gUnknown_08171E0D
_080C26CC:
	.4byte 0x00001152
_080C26D0:
	.4byte gUnknown_08171E23
_080C26D4:
	.4byte 0x00000961
_080C26D8:
	.4byte gUnknown_08171DF7
_080C26DC:
	.4byte 0x00000EE2
_080C26E0:
	.4byte 0x00000F02
_080C26E4:
	.4byte 0x00000964
_080C26E8:
	.4byte 0x00001142
_080C26EC:
	.4byte 0x00000F92
_080C26F0:
	.4byte 0x000010E2
_080C26F4:
	.4byte 0x00000FE2
_080C26F8:
	.4byte 0x00000B36
_080C26FC:
	.4byte 0x00001002
_080C2700:
	.4byte gRam
_080C2704:
	.4byte 0x00001122
_080C2708:
	mov r0, #81
	mov r1, #0
	bl sub_0812A324
	ldr r2, _080C2730  @ =gRam
	lsl r4, r4, #24
	str r4, [sp]
	asr r3, r4, #24
	ldr r1, _080C2734  @ =0x00000EB5
	add r0, r2, r1
	add r0, r3, r0
	mov r1, #0
	strb r1, [r0]
	ldr r0, _080C2738  @ =0x000010C2
	add r2, r2, r0
	add r3, r3, r2
	mov r0, #160
	strb r0, [r3]
	ldr r2, [sp]
	b _080C274C
_080C2730:
	.4byte gRam
_080C2734:
	.4byte 0x00000EB5
_080C2738:
	.4byte 0x000010C2
_080C273C:
	ldr r0, _080C2768  @ =gRam
	lsl r2, r4, #24
	asr r1, r2, #24
	ldr r3, _080C276C  @ =0x00000D74
	add r0, r0, r3
	add r1, r1, r0
	mov r0, #255
	strb r0, [r1]
_080C274C:
	cmp r7, #121
	bne _080C275E
	ldr r0, _080C2768  @ =gRam
	asr r1, r2, #24
	ldr r2, _080C2770  @ =0x00000F62
	add r0, r0, r2
	add r1, r1, r0
	mov r0, #32
_080C275C:
	strb r0, [r1]
_080C275E:
	mov r0, #1
_080C2760:
	add sp, sp, #4
	pop {r4-r7}
	pop {r1}
	bx r1
_080C2768:
	.4byte gRam
_080C276C:
	.4byte 0x00000D74
_080C2770:
	.4byte 0x00000F62
	THUMB_FUNC_END sub_080C2534

