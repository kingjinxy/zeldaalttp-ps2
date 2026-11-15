	THUMB_FUNC_START sub_080EE12C
sub_080EE12C: @ 0x080EE12C
	push {r4,r5,lr}
	lsl r0, r0, #24
	lsr r5, r0, #24
	ldr r4, _080EE164  @ =gRam
	ldr r1, _080EE168  @ =0x00000F92
	add r0, r4, r1
	add r0, r5, r0
	ldrb r1, [r0]
	lsl r1, r1, #5
	ldr r0, _080EE16C  @ =gUnknown_08178768
	add r1, r1, r0
	add r0, r5, #0
	mov r2, #4
	bl sub_080C9480
	ldr r0, _080EE170  @ =0x000010D2
	add r4, r4, r0
	add r4, r5, r4
	ldrb r0, [r4]
	cmp r0, #0
	bne _080EE15E
	add r0, r5, #0
	mov r1, #14
	bl sub_080C57F8
_080EE15E:
	pop {r4,r5}
	pop {r0}
	bx r0
_080EE164:
	.4byte gRam
_080EE168:
	.4byte 0x00000F92
_080EE16C:
	.4byte gUnknown_08178768
_080EE170:
	.4byte 0x000010D2
	THUMB_FUNC_END sub_080EE12C

