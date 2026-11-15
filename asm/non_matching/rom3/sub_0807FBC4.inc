	THUMB_FUNC_START sub_0807FBC4
sub_0807FBC4: @ 0x0807FBC4
	push {r4,r5,lr}
	ldr r2, _0807FC0C  @ =gRam
	mov r0, #150
	lsl r0, r0, #4
	add r4, r2, r0
	ldrh r1, [r4]
	mov r0, #240
	and r0, r0, r1
	lsr r0, r0, #3
	ldr r3, _0807FC10  @ =0x00000964
	add r1, r2, r3
	strh r0, [r1]
	ldr r5, _0807FC14  @ =0x00000961
	add r3, r2, r5
	mov r1, #0
	ldrsb r1, [r3, r1]
	add r5, r5, #19
	add r0, r2, r5
	strh r1, [r0]
	mov r0, #0
	ldrsb r0, [r3, r0]
	ldr r1, _0807FC18  @ =0x00000968
	add r2, r2, r1
	strh r0, [r2]
	ldr r2, _0807FC1C  @ =gUnknown_081532B0
	ldrb r1, [r4]
	mov r0, #3
	and r0, r0, r1
	lsl r0, r0, #2
	add r0, r0, r2
	ldr r0, [r0]
	bl _call_via_r0
	pop {r4,r5}
	pop {r0}
	bx r0
_0807FC0C:
	.4byte gRam
_0807FC10:
	.4byte 0x00000964
_0807FC14:
	.4byte 0x00000961
_0807FC18:
	.4byte 0x00000968
_0807FC1C:
	.4byte gUnknown_081532B0
	THUMB_FUNC_END sub_0807FBC4

