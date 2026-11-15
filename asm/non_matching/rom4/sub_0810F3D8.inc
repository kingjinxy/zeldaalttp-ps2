	THUMB_FUNC_START sub_0810F3D8
sub_0810F3D8: @ 0x0810F3D8
	push {r4,r5,lr}
	lsl r0, r0, #24
	lsr r0, r0, #24
	add r4, r0, #0
	mov r5, #210
	lsl r5, r5, #1
	bl sub_0810EE80
	cmp r0, #0
	bne _0810F40C
	ldr r0, _0810F414  @ =gRam
	ldr r1, _0810F418  @ =0x00000F52
	add r0, r0, r1
	ldrb r0, [r0]
	cmp r0, #2
	bne _0810F3FA
	add r5, r5, #1
_0810F3FA:
	add r0, r4, #0
	add r1, r5, #0
	mov r2, #0
	bl sub_080C9564
	add r0, r4, #0
	mov r1, #64
	bl sub_080CF0AC
_0810F40C:
	pop {r4,r5}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0810F414:
	.4byte gRam
_0810F418:
	.4byte 0x00000F52
	THUMB_FUNC_END sub_0810F3D8

