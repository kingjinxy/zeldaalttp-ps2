	THUMB_FUNC_START sub_0812A7C8
sub_0812A7C8: @ 0x0812A7C8
	push {r4,r5,lr}
	sub sp, sp, #12
	add r4, r0, #0
	ldr r1, _0812A830  @ =gUnknown_03000153
	mov r0, #1
	strb r0, [r1]
	mov r5, #0
	str r5, [sp, #4]
	add r0, sp, #4
	ldr r1, _0812A834  @ =gUnknown_03000C1C
	ldr r1, [r1]
	ldr r2, _0812A838  @ =0x01000C60
	bl CpuFastSet
	str r5, [sp, #8]
	add r0, sp, #8
	ldr r2, _0812A83C  @ =0x010000B0
	add r1, r4, #0
	bl CpuFastSet
	ldr r1, _0812A840  @ =gUnknown_03000140
	str r4, [r1]
	ldr r2, _0812A844  @ =gUnknown_03000148
	add r0, r4, #0
	add r0, r0, #176
	str r0, [r2]
	mov r3, #176
	lsl r3, r3, #1
	add r0, r4, r3
	str r0, [r1, #4]
	mov r0, #132
	lsl r0, r0, #2
	add r4, r4, r0
	str r4, [r2, #4]
	ldr r1, _0812A848  @ =gUnknown_03000150
	ldr r2, _0812A84C  @ =0x0000F9C4
	add r0, r2, #0
	strh r0, [r1]
	ldr r0, _0812A850  @ =gUnknown_03000152
	strb r5, [r0]
	ldr r1, _0812A854  @ =0x04000083
	mov r0, #154
	strb r0, [r1]
	ldr r0, _0812A858  @ =0x040000A0
	str r5, [r0]
	add r0, r0, #4
	str r5, [r0]
	add sp, sp, #12
	pop {r4,r5}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0812A830:
	.4byte gUnknown_03000153
_0812A834:
	.4byte gUnknown_03000C1C
_0812A838:
	.4byte 0x01000C60
_0812A83C:
	.4byte 0x010000B0
_0812A840:
	.4byte gUnknown_03000140
_0812A844:
	.4byte gUnknown_03000148
_0812A848:
	.4byte gUnknown_03000150
_0812A84C:
	.4byte 0x0000F9C4
_0812A850:
	.4byte gUnknown_03000152
_0812A854:
	.4byte 0x04000083
_0812A858:
	.4byte 0x040000A0
	THUMB_FUNC_END sub_0812A7C8

