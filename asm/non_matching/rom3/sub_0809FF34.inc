	THUMB_FUNC_START sub_0809FF34
sub_0809FF34: @ 0x0809FF34
	push {r4-r6,lr}
	ldr r4, _0809FF80  @ =gRam
	ldr r0, _0809FF84  @ =0x0000097C
	add r5, r4, r0
	ldr r1, _0809FF88  @ =0x00000974
	add r2, r4, r1
	ldrh r1, [r2]
	lsl r3, r1, #4
	ldrh r0, [r5]
	orr r3, r3, r0
	mov r0, #255
	and r0, r0, r1
	lsl r0, r0, #8
	mov r6, #0
	ldrsh r1, [r2, r6]
	mov r2, #255
	lsl r2, r2, #8
	and r1, r1, r2
	asr r1, r1, #8
	add r0, r0, r1
	orr r3, r3, r0
	strh r3, [r5]
	ldr r1, _0809FF8C  @ =0x0000096C
	add r0, r4, r1
	ldrh r1, [r0]
	mov r0, #1
	and r0, r0, r1
	lsl r0, r0, #1
	ldr r2, _0809FF90  @ =0x00001721
	add r1, r4, r2
	strb r0, [r1]
	mov r0, #0
	ldr r6, _0809FF94  @ =0x00001722
	add r4, r4, r6
	strb r0, [r4]
	pop {r4-r6}
	pop {r0}
	bx r0
_0809FF80:
	.4byte gRam
_0809FF84:
	.4byte 0x0000097C
_0809FF88:
	.4byte 0x00000974
_0809FF8C:
	.4byte 0x0000096C
_0809FF90:
	.4byte 0x00001721
_0809FF94:
	.4byte 0x00001722
	THUMB_FUNC_END sub_0809FF34

