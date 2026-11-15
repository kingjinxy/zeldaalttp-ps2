	THUMB_FUNC_START sub_080668F4
sub_080668F4: @ 0x080668F4
	push {r4,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	bl 0x0800099C
	mov r1, #1
	and r1, r1, r0
	cmp r1, #0
	beq _08066918
	ldr r0, _08066914  @ =gUnknown_0842C7FA
	mov r1, #0
	mov r2, #0
	add r3, r4, #0
	bl sub_08013C8C
	b _08066924
_08066914:
	.4byte gUnknown_0842C7FA
_08066918:
	ldr r0, _08066940  @ =gUnknown_0842C804
	mov r1, #0
	mov r2, #0
	add r3, r4, #0
	bl sub_08013C8C
_08066924:
	bl 0x0800099C
	mov r1, #1
	and r1, r1, r0
	cmp r1, #0
	beq _08066948
	ldr r0, _08066944  @ =gUnknown_0842C80E
	mov r1, #0
	mov r2, #0
	add r3, r4, #0
	bl sub_08013C8C
	b _08066954
	.byte 0x00
	.byte 0x00
_08066940:
	.4byte gUnknown_0842C804
_08066944:
	.4byte gUnknown_0842C80E
_08066948:
	ldr r0, _08066970  @ =gUnknown_0842C818
	mov r1, #0
	mov r2, #0
	add r3, r4, #0
	bl sub_08013C8C
_08066954:
	bl 0x0800099C
	mov r1, #1
	and r1, r1, r0
	cmp r1, #0
	beq _08066978
	ldr r0, _08066974  @ =gUnknown_0842C822
	mov r1, #0
	mov r2, #0
	add r3, r4, #0
	bl sub_08013C8C
	b _08066984
	.byte 0x00
	.byte 0x00
_08066970:
	.4byte gUnknown_0842C818
_08066974:
	.4byte gUnknown_0842C822
_08066978:
	ldr r0, _080669A0  @ =gUnknown_0842C82C
	mov r1, #0
	mov r2, #0
	add r3, r4, #0
	bl sub_08013C8C
_08066984:
	bl 0x0800099C
	mov r1, #1
	and r1, r1, r0
	cmp r1, #0
	beq _080669A8
	ldr r0, _080669A4  @ =gUnknown_0842C836
	mov r1, #0
	mov r2, #0
	add r3, r4, #0
	bl sub_08013C8C
	b _080669B4
	.byte 0x00
	.byte 0x00
_080669A0:
	.4byte gUnknown_0842C82C
_080669A4:
	.4byte gUnknown_0842C836
_080669A8:
	ldr r0, _080669BC  @ =gUnknown_0842C840
	mov r1, #0
	mov r2, #0
	add r3, r4, #0
	bl sub_08013C8C
_080669B4:
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080669BC:
	.4byte gUnknown_0842C840
	THUMB_FUNC_END sub_080668F4

