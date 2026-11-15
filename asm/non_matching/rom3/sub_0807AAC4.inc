	THUMB_FUNC_START sub_0807AAC4
sub_0807AAC4: @ 0x0807AAC4
	push {r4,lr}
	ldr r3, _0807AB10  @ =gRam
	ldr r1, _0807AB14  @ =0x0000097C
	add r0, r3, r1
	mov r2, #0
	ldrsh r0, [r0, r2]
	ldr r2, _0807AB18  @ =0x000009E6
	add r1, r3, r2
	add r0, r0, r1
	ldrb r4, [r0]
	cmp r4, #31
	bgt _0807AAFC
	ldr r0, _0807AB1C  @ =0x00000B14
	add r1, r3, r0
	mov r0, #0
	strh r0, [r1]
	sub r2, r2, #50
	add r1, r3, r2
	mov r0, #22
	strb r0, [r1]
	ldr r0, _0807AB20  @ =0x00000514
	add r2, r3, r0
	ldrh r1, [r2]
	ldr r0, _0807AB24  @ =0x0000FFFC
	and r0, r0, r1
	mov r1, #3
	orr r0, r0, r1
	strh r0, [r2]
_0807AAFC:
	ldr r1, _0807AB28  @ =0x00000AC4
	add r0, r3, r1
	ldrh r0, [r0]
	cmp r4, #31
	bgt _0807AB08
	add r0, r0, #8
_0807AB08:
	pop {r4}
	pop {r1}
	bx r1
	.byte 0x00
	.byte 0x00
_0807AB10:
	.4byte gRam
_0807AB14:
	.4byte 0x0000097C
_0807AB18:
	.4byte 0x000009E6
_0807AB1C:
	.4byte 0x00000B14
_0807AB20:
	.4byte 0x00000514
_0807AB24:
	.4byte 0x0000FFFC
_0807AB28:
	.4byte 0x00000AC4
	THUMB_FUNC_END sub_0807AAC4

