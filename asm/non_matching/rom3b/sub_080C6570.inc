	THUMB_FUNC_START sub_080C6570
sub_080C6570: @ 0x080C6570
	push {lr}
	lsl r0, r0, #24
	lsr r0, r0, #24
	lsl r1, r1, #24
	lsr r2, r1, #24
	ldr r1, _080C65A4  @ =gUnknown_081720D0
	add r0, r0, r1
	ldrb r1, [r0]
	ldr r0, _080C65A8  @ =gRam
	ldr r3, _080C65AC  @ =0x000009D4
	add r0, r0, r3
	ldrb r0, [r0]
	cmp r0, #179
	bne _080C659E
	mov r0, #4
	and r0, r0, r2
	cmp r0, #0
	bne _080C659E
	cmp r1, #1
	bls _080C659E
	sub r0, r1, #1
	lsl r0, r0, #24
	lsr r1, r0, #24
_080C659E:
	add r0, r1, #0
	pop {r1}
	bx r1
_080C65A4:
	.4byte gUnknown_081720D0
_080C65A8:
	.4byte gRam
_080C65AC:
	.4byte 0x000009D4
	THUMB_FUNC_END sub_080C6570

