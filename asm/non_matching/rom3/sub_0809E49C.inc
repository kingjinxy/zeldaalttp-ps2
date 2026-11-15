	THUMB_FUNC_START sub_0809E49C
sub_0809E49C: @ 0x0809E49C
	push {r4,lr}
	sub sp, sp, #8
	lsl r0, r0, #16
	lsr r3, r0, #16
	cmp r3, #64
	bne _0809E4B2
	mov r0, #64
	mov r1, #0
	bl sub_0812A324
	b _0809E4E4
_0809E4B2:
	ldr r2, _0809E4EC  @ =gRam
	ldr r1, _0809E4F0  @ =0x000016C4
	add r0, r2, r1
	ldr r4, _0809E4F4  @ =0x00000952
	add r1, r2, r4
	ldrh r0, [r0]
	ldrh r1, [r1]
	sub r0, r0, r1
	lsl r0, r0, #16
	mov r4, #182
	lsl r4, r4, #5
	add r1, r2, r4
	ldr r4, _0809E4F8  @ =0x00000958
	add r2, r2, r4
	ldrh r1, [r1]
	ldrh r2, [r2]
	sub r1, r1, r2
	lsl r1, r1, #16
	lsr r0, r0, #16
	orr r0, r0, r1
	str r0, [sp]
	add r0, r3, #0
	mov r1, sp
	bl sub_0812A324
_0809E4E4:
	add sp, sp, #8
	pop {r4}
	pop {r0}
	bx r0
_0809E4EC:
	.4byte gRam
_0809E4F0:
	.4byte 0x000016C4
_0809E4F4:
	.4byte 0x00000952
_0809E4F8:
	.4byte 0x00000958
	THUMB_FUNC_END sub_0809E49C

