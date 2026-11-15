	THUMB_FUNC_START sub_0812A90C
sub_0812A90C: @ 0x0812A90C
	push {r4,lr}
	ldr r1, _0812A944  @ =gUnknown_03000153
	mov r0, #0
	strb r0, [r1]
	ldr r1, _0812A948  @ =0x040000BC
	ldrh r2, [r1, #10]
	ldr r3, _0812A94C  @ =0x0000C5FF
	add r0, r3, #0
	and r0, r0, r2
	strh r0, [r1, #10]
	ldrh r4, [r1, #10]
	ldr r2, _0812A950  @ =0x00007FFF
	add r0, r2, #0
	and r0, r0, r4
	strh r0, [r1, #10]
	ldrh r0, [r1, #10]
	ldr r0, _0812A954  @ =0x040000C8
	ldrh r1, [r0, #10]
	and r3, r3, r1
	strh r3, [r0, #10]
	ldrh r1, [r0, #10]
	and r2, r2, r1
	strh r2, [r0, #10]
	ldrh r0, [r0, #10]
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0812A944:
	.4byte gUnknown_03000153
_0812A948:
	.4byte 0x040000BC
_0812A94C:
	.4byte 0x0000C5FF
_0812A950:
	.4byte 0x00007FFF
_0812A954:
	.4byte 0x040000C8
	THUMB_FUNC_END sub_0812A90C

