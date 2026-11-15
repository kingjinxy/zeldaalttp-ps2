	THUMB_FUNC_START sub_0812A484
sub_0812A484: @ 0x0812A484
	push {lr}
	lsl r0, r0, #16
	lsr r0, r0, #16
	ldr r2, _0812A4B0  @ =gUnknown_08198C94
	lsl r1, r0, #2
	add r1, r1, r2
	ldr r1, [r1]
	mov r2, #255
	lsl r2, r2, #16
	and r1, r1, r2
	mov r3, #0
	ldr r2, _0812A4B4  @ =gUnknown_030000C8
	lsr r1, r1, #15
	add r1, r1, r2
	mov r2, #0
	ldrsh r1, [r1, r2]
	cmp r1, r0
	bne _0812A4AA
	mov r3, #1
_0812A4AA:
	add r0, r3, #0
	pop {r1}
	bx r1
_0812A4B0:
	.4byte gUnknown_08198C94
_0812A4B4:
	.4byte gUnknown_030000C8
	THUMB_FUNC_END sub_0812A484

