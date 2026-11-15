	THUMB_FUNC_START sub_08071000
sub_08071000: @ 0x08071000
	push {lr}
	ldr r1, _08071030  @ =gRam
	ldr r2, _08071034  @ =0x000009DA
	add r0, r1, r2
	ldrh r0, [r0]
	add r2, r1, #0
	cmp r0, #16
	beq _08071018
	cmp r0, #7
	beq _08071018
	cmp r0, #23
	bne _08071020
_08071018:
	ldr r0, _08071038  @ =0x00000A3C
	add r1, r2, r0
	ldr r0, _0807103C  @ =0x0000FFF1
	strh r0, [r1]
_08071020:
	ldr r0, _08071040  @ =0x00000A4C
	add r1, r2, r0
	mov r0, #0
	strh r0, [r1]
	bl sub_0806D93C
	pop {r0}
	bx r0
_08071030:
	.4byte gRam
_08071034:
	.4byte 0x000009DA
_08071038:
	.4byte 0x00000A3C
_0807103C:
	.4byte 0x0000FFF1
_08071040:
	.4byte 0x00000A4C
	THUMB_FUNC_END sub_08071000

