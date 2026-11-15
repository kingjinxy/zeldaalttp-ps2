	THUMB_FUNC_START sub_08074814
sub_08074814: @ 0x08074814
	push {r4,lr}
	bl sub_08132ADC
	ldr r3, _08074844  @ =gRam
	ldr r1, _08074848  @ =0x000009B5
	add r0, r3, r1
	ldrb r4, [r0]
	cmp r4, #0
	bne _0807483E
	mov r0, #163
	lsl r0, r0, #3
	add r2, r3, r0
	ldrh r1, [r2]
	ldr r0, _0807484C  @ =0x0000FFFC
	and r0, r0, r1
	mov r1, #3
	orr r0, r0, r1
	strh r0, [r2]
	ldr r1, _08074850  @ =0x0000051E
	add r0, r3, r1
	strh r4, [r0]
_0807483E:
	pop {r4}
	pop {r0}
	bx r0
_08074844:
	.4byte gRam
_08074848:
	.4byte 0x000009B5
_0807484C:
	.4byte 0x0000FFFC
_08074850:
	.4byte 0x0000051E
	THUMB_FUNC_END sub_08074814

