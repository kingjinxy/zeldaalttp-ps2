	THUMB_FUNC_START sub_080A1388
sub_080A1388: @ 0x080A1388
	push {r4,lr}
	ldr r1, _080A13C4  @ =gRam
	ldr r0, _080A13C8  @ =0x00001808
	add r2, r1, r0
	mov r4, #0
	mov r0, #2
	strb r0, [r2]
	ldr r2, _080A13CC  @ =0x00001705
	add r3, r1, r2
	ldrb r2, [r3]
	mov r0, #1
	orr r0, r0, r2
	strb r0, [r3]
	ldr r3, _080A13D0  @ =0x000016D4
	add r0, r1, r3
	strb r4, [r0]
	ldr r2, _080A13D4  @ =0x00001793
	add r0, r1, r2
	strb r4, [r0]
	ldr r0, _080A13D8  @ =gUnknown_08168C61
	ldrb r2, [r0]
	add r3, r3, #192
	add r0, r1, r3
	strb r2, [r0]
	ldr r0, _080A13DC  @ =0x00001796
	add r1, r1, r0
	strb r4, [r1]
	pop {r4}
	pop {r0}
	bx r0
_080A13C4:
	.4byte gRam
_080A13C8:
	.4byte 0x00001808
_080A13CC:
	.4byte 0x00001705
_080A13D0:
	.4byte 0x000016D4
_080A13D4:
	.4byte 0x00001793
_080A13D8:
	.4byte gUnknown_08168C61
_080A13DC:
	.4byte 0x00001796
	THUMB_FUNC_END sub_080A1388

