	THUMB_FUNC_START sub_081110B0
sub_081110B0: @ 0x081110B0
	push {r4,lr}
	add r4, r0, #0
	lsl r4, r4, #24
	lsr r4, r4, #24
	mov r0, #16
	bl sub_080CF388
	ldr r0, _081110E0  @ =gRam
	ldr r1, _081110E4  @ =0x000010E2
	add r0, r0, r1
	add r0, r4, r0
	ldrb r0, [r0]
	mov r1, #12
	and r1, r1, r0
	lsl r1, r1, #3
	ldr r0, _081110E8  @ =gUnknown_0817D510
	add r1, r1, r0
	add r0, r4, #0
	mov r2, #4
	bl sub_080C9480
	pop {r4}
	pop {r0}
	bx r0
_081110E0:
	.4byte gRam
_081110E4:
	.4byte 0x000010E2
_081110E8:
	.4byte gUnknown_0817D510
	THUMB_FUNC_END sub_081110B0

