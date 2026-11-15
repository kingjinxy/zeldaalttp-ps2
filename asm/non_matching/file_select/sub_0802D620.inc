	THUMB_FUNC_START sub_0802D620
sub_0802D620: @ 0x0802D620
	push {r4,r5,lr}
	add r3, r0, #0
	ldr r0, _0802D670  @ =gUnknown_03000420
	ldrb r0, [r0, #3]
	lsl r0, r0, #11
	ldr r1, _0802D674  @ =gUnknown_0202D138
	add r0, r0, r1
	mov r1, #192
	lsl r1, r1, #1
	add r2, r0, r1
	mov r4, #4
	ldr r5, _0802D678  @ =gUnknown_0813D760
_0802D638:
	ldrb r0, [r3]
	lsl r1, r0, #1
	add r1, r1, r0
	lsl r1, r1, #2
	add r1, r1, r5
	ldrh r0, [r1]
	strh r0, [r2]
	ldrh r0, [r1, #2]
	strh r0, [r2, #2]
	ldrh r0, [r1, #4]
	strh r0, [r2, #4]
	add r2, r2, #64
	ldrh r0, [r1, #6]
	strh r0, [r2]
	ldrh r0, [r1, #8]
	strh r0, [r2, #2]
	ldrh r0, [r1, #10]
	strh r0, [r2, #4]
	add r2, r2, #64
	sub r0, r4, #1
	lsl r0, r0, #24
	lsr r4, r0, #24
	add r3, r3, #1
	cmp r4, #0
	bne _0802D638
	pop {r4,r5}
	pop {r0}
	bx r0
_0802D670:
	.4byte gUnknown_03000420
_0802D674:
	.4byte gUnknown_0202D138
_0802D678:
	.4byte gUnknown_0813D760
	THUMB_FUNC_END sub_0802D620

