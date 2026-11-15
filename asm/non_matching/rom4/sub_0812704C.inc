	THUMB_FUNC_START sub_0812704C
sub_0812704C: @ 0x0812704C
	push {r4,r5,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	ldr r0, _0812706C  @ =gRam
	ldr r1, _08127070  @ =0x0000096C
	add r0, r0, r1
	mov r1, #2
	strh r1, [r0]
	cmp r4, #2
	bne _08127078
	ldr r1, _08127074  @ =gUnknown_081807E0
	mov r0, #2
	mov r2, #1
	bl sub_08126420
	b _08127082
_0812706C:
	.4byte gRam
_08127070:
	.4byte 0x0000096C
_08127074:
	.4byte gUnknown_081807E0
_08127078:
	ldr r1, _081270A8  @ =gUnknown_081807D0
	add r0, r4, #0
	mov r2, #1
	bl sub_08126420
_08127082:
	ldr r5, _081270AC  @ =gUnknown_03000050
	ldrb r0, [r5, #2]
	cmp r0, #0
	bne _081270A0
	add r0, r4, #0
	bl sub_08126544
	ldr r0, _081270B0  @ =gUnknown_08180914
	ldrb r1, [r5]
	lsl r1, r1, #2
	add r1, r1, r0
	ldr r1, [r1]
	add r0, r4, #0
	bl _call_via_r1
_081270A0:
	pop {r4,r5}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_081270A8:
	.4byte gUnknown_081807D0
_081270AC:
	.4byte gUnknown_03000050
_081270B0:
	.4byte gUnknown_08180914
	THUMB_FUNC_END sub_0812704C

