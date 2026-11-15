	THUMB_FUNC_START sub_080CC170
sub_080CC170: @ 0x080CC170
	push {r4-r7,lr}
	lsl r0, r0, #24
	lsr r7, r0, #24
	mov r0, #80
	add r1, r7, #0
	bl sub_080CA538
	lsl r0, r0, #24
	mov r12, r0
	asr r5, r0, #24
	cmp r5, #0
	blt _080CC250
	ldr r4, _080CC258  @ =gRam
	ldr r1, _080CC25C  @ =0x00000969
	add r0, r4, r1
	ldrb r2, [r0]
	ldr r3, _080CC260  @ =0x0000096C
	add r0, r4, r3
	ldrb r0, [r0]
	lsl r0, r0, #8
	orr r2, r2, r0
	add r1, r1, #19
	add r0, r4, r1
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	add r2, r2, r0
	add r3, r3, #1
	add r0, r4, r3
	ldrb r1, [r0]
	add r3, r3, #3
	add r0, r4, r3
	ldrb r0, [r0]
	lsl r0, r0, #8
	add r1, r1, r0
	sub r1, r1, #1
	ldr r3, _080CC264  @ =0x00000EE2
	add r0, r4, r3
	add r0, r5, r0
	strb r2, [r0]
	add r3, r3, #32
	add r0, r4, r3
	add r0, r5, r0
	lsr r2, r2, #8
	strb r2, [r0]
	ldr r2, _080CC268  @ =0x00000ED2
	add r0, r4, r2
	add r6, r5, r0
	strb r1, [r6]
	sub r3, r3, #16
	add r0, r4, r3
	add r0, r5, r0
	lsr r1, r1, #8
	strb r1, [r0]
	ldr r0, _080CC26C  @ =0x00000F22
	add r1, r4, r0
	add r1, r5, r1
	ldr r2, _080CC270  @ =gUnknown_081729E8
	ldr r0, _080CC274  @ =0x000015F9
	add r3, r4, r0
	ldrb r0, [r3]
	add r0, r0, r2
	ldrb r0, [r0]
	strb r0, [r1]
	ldr r2, _080CC278  @ =0x00000F12
	add r1, r4, r2
	add r1, r5, r1
	ldr r2, _080CC27C  @ =gUnknown_081729EC
	ldrb r0, [r3]
	add r0, r0, r2
	ldrb r0, [r0]
	strb r0, [r1]
	ldr r3, _080CC280  @ =0x000010F2
	add r1, r4, r3
	add r1, r5, r1
	ldr r2, _080CC284  @ =0x00000D5B
	add r0, r4, r2
	add r0, r7, r0
	ldrb r0, [r0]
	strb r0, [r1]
	ldr r3, _080CC288  @ =0x000015FA
	add r0, r4, r3
	ldrb r1, [r0]
	cmp r1, #0
	beq _080CC23C
	ldr r2, _080CC28C  @ =0x00000F52
	add r0, r4, r2
	add r0, r5, r0
	strb r1, [r0]
	ldrb r0, [r6]
	add r0, r0, #8
	strb r0, [r6]
	ldr r3, _080CC290  @ =0x00001012
	add r0, r4, r3
	add r0, r5, r0
	mov r1, #3
	strb r1, [r0]
	ldr r1, _080CC294  @ =0x00001132
	add r0, r4, r1
	add r0, r5, r0
	mov r1, #9
	strb r1, [r0]
_080CC23C:
	ldr r2, _080CC298  @ =0x00000FE2
	add r0, r4, r2
	add r0, r5, r0
	mov r1, #64
	strb r1, [r0]
	mov r3, r12
	lsr r0, r3, #24
	mov r1, #88
	bl sub_080CF140
_080CC250:
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080CC258:
	.4byte gRam
_080CC25C:
	.4byte 0x00000969
_080CC260:
	.4byte 0x0000096C
_080CC264:
	.4byte 0x00000EE2
_080CC268:
	.4byte 0x00000ED2
_080CC26C:
	.4byte 0x00000F22
_080CC270:
	.4byte gUnknown_081729E8
_080CC274:
	.4byte 0x000015F9
_080CC278:
	.4byte 0x00000F12
_080CC27C:
	.4byte gUnknown_081729EC
_080CC280:
	.4byte 0x000010F2
_080CC284:
	.4byte 0x00000D5B
_080CC288:
	.4byte 0x000015FA
_080CC28C:
	.4byte 0x00000F52
_080CC290:
	.4byte 0x00001012
_080CC294:
	.4byte 0x00001132
_080CC298:
	.4byte 0x00000FE2
	THUMB_FUNC_END sub_080CC170

