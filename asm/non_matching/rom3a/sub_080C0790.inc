	THUMB_FUNC_START sub_080C0790
sub_080C0790: @ 0x080C0790
	push {lr}
	ldr r0, _080C07AC  @ =gRam
	ldr r2, _080C07B0  @ =0x00000964
	add r1, r0, r2
	mov r3, #0
	ldrsh r1, [r1, r3]
	add r2, r0, #0
	cmp r1, #0
	bne _080C07B4
	mov r1, #150
	lsl r1, r1, #4
	add r0, r2, r1
	ldrh r0, [r0]
	b _080C07C2
_080C07AC:
	.4byte gRam
_080C07B0:
	.4byte 0x00000964
_080C07B4:
	mov r3, #150
	lsl r3, r3, #4
	add r0, r2, r3
	ldrh r0, [r0]
	neg r0, r0
	lsl r0, r0, #16
	lsr r0, r0, #16
_080C07C2:
	ldr r1, _080C07F8  @ =gUnknown_02006890
	lsl r0, r0, #16
	asr r0, r0, #16
	ldrh r1, [r1]
	add r0, r0, r1
	lsl r0, r0, #16
	ldr r3, _080C07FC  @ =0x00000958
	add r1, r2, r3
	ldrh r1, [r1]
	ldr r3, _080C0800  @ =0xFFFC0000
	add r0, r0, r3
	asr r0, r0, #16
	sub r0, r0, r1
	mov r3, #150
	lsl r3, r3, #4
	add r1, r2, r3
	strh r0, [r1]
	ldr r1, _080C0804  @ =0x0000096C
	add r0, r2, r1
	mov r3, #0
	ldrsh r0, [r0, r3]
	cmp r0, #0
	bne _080C0808
	sub r1, r1, #4
	add r0, r2, r1
	ldrh r0, [r0]
	b _080C0814
_080C07F8:
	.4byte gUnknown_02006890
_080C07FC:
	.4byte 0x00000958
_080C0800:
	.4byte 0xFFFC0000
_080C0804:
	.4byte 0x0000096C
_080C0808:
	ldr r3, _080C0838  @ =0x00000968
	add r0, r2, r3
	ldrh r0, [r0]
	neg r0, r0
	lsl r0, r0, #16
	lsr r0, r0, #16
_080C0814:
	ldr r1, _080C083C  @ =gUnknown_0200688E
	lsl r0, r0, #16
	asr r0, r0, #16
	ldrh r1, [r1]
	add r0, r0, r1
	lsl r0, r0, #16
	ldr r3, _080C0840  @ =0x00000952
	add r1, r2, r3
	ldrh r1, [r1]
	ldr r3, _080C0844  @ =0xFFFC0000
	add r0, r0, r3
	asr r0, r0, #16
	sub r0, r0, r1
	ldr r3, _080C0848  @ =0x00000964
	add r1, r2, r3
	strh r0, [r1]
	pop {r0}
	bx r0
_080C0838:
	.4byte 0x00000968
_080C083C:
	.4byte gUnknown_0200688E
_080C0840:
	.4byte 0x00000952
_080C0844:
	.4byte 0xFFFC0000
_080C0848:
	.4byte 0x00000964
	THUMB_FUNC_END sub_080C0790

