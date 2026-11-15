	THUMB_FUNC_START sub_0810F0E0
sub_0810F0E0: @ 0x0810F0E0
	push {lr}
	mov r1, #0
	ldr r0, _0810F0F8  @ =gRam
	ldr r2, _0810F0FC  @ =0x000009DA
	add r0, r0, r2
	ldrb r0, [r0]
	cmp r0, #40
	bne _0810F0F2
	mov r1, #1
_0810F0F2:
	add r0, r1, #0
	pop {r1}
	bx r1
_0810F0F8:
	.4byte gRam
_0810F0FC:
	.4byte 0x000009DA
	THUMB_FUNC_END sub_0810F0E0

