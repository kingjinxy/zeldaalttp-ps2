	THUMB_FUNC_START sub_08131F24
sub_08131F24: @ 0x08131F24
	push {r4-r6,lr}
	lsl r0, r0, #16
	lsr r1, r0, #16
	ldr r3, _08131F90  @ =gRam
	mov r0, #150
	lsl r0, r0, #4
	add r2, r3, r0
	strh r1, [r2]
	mov r0, #31
	and r0, r0, r1
	add r1, r0, #0
	add r1, r1, #14
	cmp r1, #30
	bls _08131F42
	mov r1, #31
_08131F42:
	ldr r4, _08131F94  @ =0x00000964
	add r5, r3, r4
	strh r1, [r5]
	ldrh r2, [r2]
	mov r4, #248
	lsl r4, r4, #2
	add r0, r4, #0
	and r0, r0, r2
	mov r6, #224
	lsl r6, r6, #1
	add r1, r0, r6
	ldr r0, _08131F98  @ =0x000003DF
	cmp r1, r0
	bls _08131F60
	add r1, r4, #0
_08131F60:
	ldr r4, _08131F9C  @ =0x00000968
	add r0, r3, r4
	add r4, r1, #0
	strh r1, [r0]
	mov r3, #248
	lsl r3, r3, #7
	add r0, r3, #0
	and r0, r0, r2
	mov r6, #224
	lsl r6, r6, #6
	add r1, r0, r6
	ldr r0, _08131FA0  @ =0x00007BFF
	cmp r1, r0
	bls _08131F7E
	add r1, r3, #0
_08131F7E:
	ldrh r0, [r5]
	orr r1, r1, r0
	orr r1, r1, r4
	lsl r0, r1, #16
	lsr r0, r0, #16
	pop {r4-r6}
	pop {r1}
	bx r1
	.byte 0x00
	.byte 0x00
_08131F90:
	.4byte gRam
_08131F94:
	.4byte 0x00000964
_08131F98:
	.4byte 0x000003DF
_08131F9C:
	.4byte 0x00000968
_08131FA0:
	.4byte 0x00007BFF
	THUMB_FUNC_END sub_08131F24

