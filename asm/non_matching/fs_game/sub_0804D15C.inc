	THUMB_FUNC_START sub_0804D15C
sub_0804D15C: @ 0x0804D15C
	push {r4,r7,lr}
	sub sp, sp, #4
	mov r7, sp
	str r0, [r7]
	ldr r0, _0804D190  @ =gUnknown_0202A4F8
	ldr r1, _0804D190  @ =gUnknown_0202A4F8
	ldr r2, _0804D194  @ =gUnknown_08137B10
	ldr r3, [r7]
	ldr r4, [r3, #16]
	add r3, r4, #2
	ldrh r4, [r3]
	add r3, r4, #0
	lsl r4, r3, #2
	add r2, r2, r4
	ldr r1, [r1]
	ldr r2, [r2]
	orr r1, r1, r2
	str r1, [r0]
	ldr r0, [r7]
	ldr r1, [r7]
	ldr r2, [r1, #16]
	add r1, r2, #4
	str r1, [r0, #16]
	mov r0, #0
	b _0804D198
	.byte 0x00
	.byte 0x00
_0804D190:
	.4byte gUnknown_0202A4F8
_0804D194:
	.4byte gUnknown_08137B10
_0804D198:
	add sp, sp, #4
	pop {r4,r7}
	pop {r1}
	bx r1
	THUMB_FUNC_END sub_0804D15C

