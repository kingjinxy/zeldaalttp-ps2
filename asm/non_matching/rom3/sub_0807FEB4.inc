	THUMB_FUNC_START sub_0807FEB4
sub_0807FEB4: @ 0x0807FEB4
	push {r4,r5,lr}
	ldr r1, _0807FEF8  @ =gUnknown_08162768
	ldr r3, _0807FEFC  @ =gRam
	ldr r2, _0807FF00  @ =0x00000A1E
	add r0, r3, r2
	ldrh r0, [r0]
	lsl r0, r0, #2
	add r0, r0, r1
	ldr r2, [r0]
	ldr r5, _0807FF04  @ =0x000009F4
	add r4, r3, r5
	ldrh r0, [r4]
	add r0, r2, r0
	ldrb r1, [r0]
	mov r0, #240
	and r0, r0, r1
	ldr r5, _0807FF08  @ =0x00000B38
	add r1, r3, r5
	strh r0, [r1]
	ldrh r0, [r4]
	add r2, r2, r0
	ldrb r1, [r2]
	mov r0, #15
	and r0, r0, r1
	lsl r0, r0, #4
	ldr r1, _0807FF0C  @ =0x00000B12
	add r3, r3, r1
	strh r0, [r3]
	ldrh r0, [r4]
	add r0, r0, #1
	strh r0, [r4]
	pop {r4,r5}
	pop {r0}
	bx r0
_0807FEF8:
	.4byte gUnknown_08162768
_0807FEFC:
	.4byte gRam
_0807FF00:
	.4byte 0x00000A1E
_0807FF04:
	.4byte 0x000009F4
_0807FF08:
	.4byte 0x00000B38
_0807FF0C:
	.4byte 0x00000B12
	THUMB_FUNC_END sub_0807FEB4

