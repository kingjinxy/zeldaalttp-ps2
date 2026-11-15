	THUMB_FUNC_START sub_0807CED0
sub_0807CED0: @ 0x0807CED0
	push {r4,r5,lr}
	ldr r0, _0807CF04  @ =gRam
	ldr r2, _0807CF08  @ =0x000009DA
	add r1, r0, r2
	ldrh r1, [r1]
	add r2, r0, #0
	cmp r1, #101
	bne _0807CF14
	ldr r3, _0807CF0C  @ =0x00000AA8
	add r0, r2, r3
	ldrh r1, [r0]
	mov r0, #128
	lsl r0, r0, #5
	and r0, r0, r1
	cmp r0, #0
	beq _0807CF14
	ldr r1, _0807CF10  @ =0x000009EA
	add r0, r2, r1
	mov r1, #0
	strh r1, [r0]
	sub r3, r3, #186
	add r0, r2, r3
	strh r1, [r0]
	bl sub_0807CBF0
	b _0807CF5E
_0807CF04:
	.4byte gRam
_0807CF08:
	.4byte 0x000009DA
_0807CF0C:
	.4byte 0x00000AA8
_0807CF10:
	.4byte 0x000009EA
_0807CF14:
	ldr r5, _0807CF64  @ =gUnknown_08164ADA
	mov r1, #151
	lsl r1, r1, #4
	add r0, r2, r1
	mov r2, #0
	ldrsh r4, [r0, r2]
	ldr r0, _0807CF68  @ =0x00003030
	mov r1, #0
	add r2, r4, #0
	add r3, r5, #0
	bl sub_0807CE00
	ldr r0, _0807CF6C  @ =0x00003131
	add r2, r4, #4
	add r3, r5, #0
	add r3, r3, #8
	mov r1, #4
	bl sub_0807CE00
	mov r3, #128
	lsl r3, r3, #1
	add r4, r4, r3
	ldr r0, _0807CF70  @ =0x00003232
	add r3, r5, #0
	add r3, r3, #16
	mov r1, #8
	add r2, r4, #0
	bl sub_0807CE00
	ldr r0, _0807CF74  @ =0x00003333
	add r4, r4, #4
	add r5, r5, #24
	mov r1, #12
	add r2, r4, #0
	add r3, r5, #0
	bl sub_0807CE00
_0807CF5E:
	pop {r4,r5}
	pop {r0}
	bx r0
_0807CF64:
	.4byte gUnknown_08164ADA
_0807CF68:
	.4byte 0x00003030
_0807CF6C:
	.4byte 0x00003131
_0807CF70:
	.4byte 0x00003232
_0807CF74:
	.4byte 0x00003333
	THUMB_FUNC_END sub_0807CED0

