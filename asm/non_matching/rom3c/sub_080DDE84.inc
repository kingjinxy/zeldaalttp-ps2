	THUMB_FUNC_START sub_080DDE84
sub_080DDE84: @ 0x080DDE84
	push {lr}
	lsl r0, r0, #24
	lsr r3, r0, #24
	ldr r0, _080DDEB0  @ =gMaxHealth
	ldr r1, _080DDEB4  @ =gCurrentHealth
	ldrb r0, [r0]
	ldrb r1, [r1]
	cmp r0, r1
	bne _080DDEAC
	ldr r2, _080DDEB8  @ =gRam
	ldr r0, _080DDEBC  @ =0x00000F52
	add r1, r2, r0
	add r1, r3, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	ldr r0, _080DDEC0  @ =0x00000FE2
	add r2, r2, r0
	mov r0, #112
	strb r0, [r2]
_080DDEAC:
	pop {r0}
	bx r0
_080DDEB0:
	.4byte gMaxHealth
_080DDEB4:
	.4byte gCurrentHealth
_080DDEB8:
	.4byte gRam
_080DDEBC:
	.4byte 0x00000F52
_080DDEC0:
	.4byte 0x00000FE2
	THUMB_FUNC_END sub_080DDE84

