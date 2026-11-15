	THUMB_FUNC_START sub_0802DE48
sub_0802DE48: @ 0x0802DE48
	push {r4-r7,lr}
	ldr r6, _0802DE64  @ =gUnknown_02016D78
	ldr r7, _0802DE68  @ =gUnknown_03006C80
	ldr r0, [r7, #8]
	cmp r0, #0
	bne _0802DE6C
	strh r0, [r6]
	add r6, r6, #2
	strh r0, [r6]
	add r6, r6, #2
	strh r0, [r6]
	strh r0, [r6, #2]
	b _0802DEAE
	.byte 0x00
	.byte 0x00
_0802DE64:
	.4byte gUnknown_02016D78
_0802DE68:
	.4byte gUnknown_03006C80
_0802DE6C:
	lsl r0, r0, #4
	bl Sqrt
	ldr r4, _0802DEB4  @ =0x0000FFFC
	and r4, r4, r0
	ldr r0, [r7, #12]
	mul r0, r4, r0
	ldr r5, [r7, #8]
	add r1, r5, #0
	bl __udivsi3
	strh r0, [r6]
	add r6, r6, #2
	ldr r0, [r7, #16]
	mul r0, r4, r0
	add r1, r5, #0
	bl __udivsi3
	strh r0, [r6]
	add r6, r6, #2
	ldr r0, [r7, #20]
	mul r0, r4, r0
	add r1, r5, #0
	bl __udivsi3
	strh r0, [r6]
	add r6, r6, #2
	ldr r0, [r7, #24]
	mul r0, r4, r0
	add r1, r5, #0
	bl __udivsi3
	strh r0, [r6]
_0802DEAE:
	pop {r4-r7}
	pop {r0}
	bx r0
_0802DEB4:
	.4byte 0x0000FFFC
	THUMB_FUNC_END sub_0802DE48

